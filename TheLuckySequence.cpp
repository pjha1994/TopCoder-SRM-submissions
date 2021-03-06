#include <bits/stdc++.h>
using namespace std;

class TheLuckySequence
{
public:
	int count(vector <int> numbers, int length);
};

class Matrix {
public:
  long long x11, x12, x21, x22;
  Matrix(long long a, long long b, long long c, long long d) {
    x11 = a; x12 = b; x21 = c; x22 = d;
  }
};

long long mod = 1234567891ll;

Matrix mul(Matrix a, Matrix b) {
  long long x11, x12, x21, x22;
  x11 = a.x11*b.x11 + a.x12*b.x21;
  x12 = a.x11*b.x12 + a.x12*b.x22;
  x21 = a.x21*b.x11 + a.x22*b.x21;
  x22 = a.x21*b.x12 + a.x22*b.x22;
  x11 %= mod;
  x21 %= mod;
  x12 %= mod;
  x22 %= mod;

  return Matrix(x11, x12, x21, x22);
}

Matrix pow(Matrix x, int n) {
  if(n == 0)
    return Matrix(1, 0, 0, 1);
  Matrix ret = pow(x, n/2);
  ret = mul(ret, ret);
  if(n % 2 == 1)
    ret = mul(x, ret);
  return ret;
}

pair <int, int> getEnds(int n) {
  pair <int, int> ret;
  ret.second = n % 10;
  while(n >= 10) {
    n /= 10;
  }
  ret.first = n;
  return ret;
}

bool isLucky(int n) {
  return n == 0 ? true : (n%10 == 4 || n%10==7 ? isLucky(n/10): false);
}

int TheLuckySequence::count (vector <int> numbers, int length) 
{
  vector <int> lucky;
  for(auto it = (numbers).begin(); it != (numbers).end(); ++it) {
    if(isLucky(*it))
      lucky.push_back(*it);
  }

  sort(lucky.begin(), lucky.end());
  lucky.erase(unique(lucky.begin(), lucky.end()), lucky.end());
  /*
  for(auto it = (lucky).begin(); it != (lucky).end(); ++it) {
    printf("%d ", *it);
  }
  cout << "\n";
  */

  long long c4 = 0, c7 = 0;
  Matrix B(0, 0, 0, 0);
  for(auto it = (lucky).begin(); it != (lucky).end(); ++it) {
    pair <int, int> ex = getEnds(*it);
    if(ex.first==4&&ex.second==4)
      B.x11++;
    else if(ex.first==4 && ex.second==7)
      B.x21++;
    else if(ex.first==7 && ex.second==4)
      B.x12++;
    else if(ex.first==7 && ex.second==7)
      B.x22++;

    if(ex.second==4)
      c4++;
    else
      c7++;
  }
  //printf("%2lld %2lld\n%2lld %2lld\n\n", B.x11, B.x12, B.x21, B.x22);

  Matrix b = pow(B, length-1);
  //printf("%2lld %2lld\n%2lld %2lld\n\n", b.x11, b.x12, b.x21, b.x22);

  long long a4 = c4*b.x11 + c7*b.x12;
  long long a7 = c4*b.x21 + c7*b.x22;
  a4 %= mod;
  a7 %= mod;

  /*
  cout << "a4 = " << a4 << "\n";
  cout << "a7 = " << a7 << "\n";
  */

  return (a4 + a7)%mod;

}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	TheLuckySequence *obj;
	int answer;
	obj = new TheLuckySequence();
	clock_t startTime = clock();
	answer = obj->count(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	vector <int> p0;
	int p1;
	int p2;
	
	{
	// ----- test 0 -----
	int t0[] = {1,2,3,4,5,6,7,8,9,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	p2 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {47,74,47};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	p2 = 2;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {100,4774,200,747,300};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 47;
	p2 = 2;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {44,47,74,77};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	p2 = 8;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// 
// John thinks 4 and 7 are lucky digits, and all other digits are not lucky.  A lucky number is a number that contains only lucky digits in decimal notation.
// 
// 
// 
// A lucky sequence is a sequence of length numbers A[0], A[1], ..., A[length - 1] that satisfies all of the following properties:
// 
// Each number A[i] is lucky, where 0 <= i < length.
// For each i, where 0 <= i < length, there exists at least one j such that A[i] = numbers[j].
// For each i, where 0 <= i < length - 1, the last digit of A[i] is the same as the first digit of A[i + 1].
// 
// 
// 
// 
// You are given a vector <int> numbers and an int length.  Return the number of distinct lucky sequences modulo 1234567891. 
// 
// 
// 
// DEFINITION
// Class:TheLuckySequence
// Method:count
// Parameters:vector <int>, int
// Returns:int
// Method signature:int count(vector <int> numbers, int length)
// 
// 
// NOTES
// -Two lucky sequences A[0], A[1], ..., A[length - 1] and B[0], B[1], ..., B[length - 1] are considered distinct if there exists i, 0 <= i < length, such that A[i] ≠ B[i].
// 
// 
// CONSTRAINTS
// -numbers will contain between 1 and 50 elements, inclusive.
// -Each element of numbers will be between 1 and 1,000,000,000, inclusive.
// -length will be between 1 and 1,000,000,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
// 1
// 
// Returns: 2
// 
// There are only two lucky numbers among these ten integers.
// 
// 1)
// {47, 74, 47}
// 3
// 
// Returns: 2
// 
// We can construct only two different sequences (47, 74, 47) and (74, 47, 74).
// 
// 2)
// {100, 4774, 200, 747, 300}
// 47
// 
// Returns: 2
// 
// 
// 
// 3)
// {44, 47, 74, 77}
// 2
// 
// Returns: 8
// 
// 
// 
// END KAWIGIEDIT TESTING



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
