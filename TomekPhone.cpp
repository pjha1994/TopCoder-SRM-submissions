#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <climits>
#include <cstring>
using namespace std;

typedef long long  int64;
typedef vector<int> vi;
typedef string ST;
typedef stringstream SS;
typedef vector< vector <int> > vvi;
typedef pair<int,int> ii;
typedef vector <string> vs;

#define endl 		("\n")
#define DEBUG(x)	cout << #x << " = " << x << "\n"
#define Pf		printf
#define	Sf		scanf

#define	ep		1e-9
#define PI		M_PI
#define E 		M_E

#define	CL(a, b)	memset(a, b, sizeof(a))
#define	mp		make_pair
#define	pb		push_back

#define	all(c)		(c).begin(), (c).end()
#define	tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())		//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here ; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int)b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i >= loop_ends_here; i--)

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

class TomekPhone
{
public:
	int minKeystrokes(vector <int> occurences, vector <int> keySizes);
};


int TomekPhone::minKeystrokes (vector <int> occurences, vector <int> keySizes) 
{
	if(occurences.size() > accumulate(all(keySizes), 0))
		return -1;
	sort(all(occurences), greater<int>());
	int ret = 0;
	vi idx(keySizes.size(), 0);

	forn(i, occurences.size()) {
		int mn = -1;
		forn(j, keySizes.size()) {
			if(idx[j] < keySizes[j] && (mn == -1 || idx[mn] > idx[j]))
				mn = j;
		}
		idx[mn]++;
		ret += occurences[i]*idx[mn];
	}
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}";
	cout << "]" << endl;
	TomekPhone *obj;
	int answer;
	obj = new TomekPhone();
	clock_t startTime = clock();
	answer = obj->minKeystrokes(p0, p1);
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
	vector <int> p1;
	int p2;
	
	{
	// ----- test 0 -----
	int t0[] = {7,3,4,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 19;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {13,7,4,20};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = -1;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {11,23,4,50,1000,7,18};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {3,1,4};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1164;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {100,1000,1,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {50};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1234;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {10,10,10,10,10,10,10,10};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 3353;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {8,9};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {3,3,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(5, p0, p1, false, p2) && all_right;
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
// Tomek thinks that smartphones are overrated.
// He plans to release a new cellphone with an old-school keyboard, which may require you to tap a key multiple times to type a single letter.
// For example, if the keyboard has two keys, one with the letters "adef" and the other one with the letters "zyx", then typing 'a' requires one keystroke, typing 'f' requires four keystrokes, typing 'y' requires two keystrokes, and so on.
// 
// 
// 
// Tomek has already designed the keyboard's layout.
// That is, he already knows the number of keys on the keyboard, and for each key he knows the maximum number of letters it may hold.
// He now wants to create a specific keyboard for a language that uses N different letters.
// He has a large body of text in this language, and he already analyzed it to find the frequencies of all N letters of its alphabet.
// 
// 
// 
// You are given a vector <int> frequencies with N elements.
// Each element of frequencies is the number of times one of the letters in Tomek's alphabet appears in the text he has.
// Each element of frequencies will be strictly positive.
// (I.e., each of the N letters occurs at least once in Tomek's text.)
// 
// 
// 
// You are also given a vector <int> keySize.
// The number of elements of keySize is the number of keys on Tomek's keyboard.
// Each element of keySize gives the maximal number of letters on one of the keys.
// 
// 
// 
// Find an assignment of letters to keys that minimizes the number of keystrokes needed to type Tomek's entire text.
// Return that minimum number of keystrokes.
// If there is not enough room on the keys and some letters of the alphabet won't fit, return -1 instead.
// 
// 
// DEFINITION
// Class:TomekPhone
// Method:minKeystrokes
// Parameters:vector <int>, vector <int>
// Returns:int
// Method signature:int minKeystrokes(vector <int> frequencies, vector <int> keySizes)
// 
// 
// CONSTRAINTS
// -frequencies will contain between 1 and 50 elements, inclusive.
// -Each element of frequencies will be between 1 and 1,000, inclusive.
// -keySizes will contain between 1 and 50 elements, inclusive.
// -Each element of keySizes will be between 1 and 50, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {7,3,4,1}
// {2,2}
// 
// Returns: 19
// 
// Tomek's language has four letters.
// Let us call them A, B, C, and D.
// Tomek's text contains seven As, three Bs, four Cs, and one D.
// The keyboard has two keys, each of them may contain at most two letters.
// One optimal solution is to use the keys "AD" and "CB".
// We can then type each A and each C using a single keystroke, and we need two keystrokes for each B and each D.
// Therefore, the total number of keystrokes when typing the entire text will be 7*1 + 3*2 + 4*1 + 1*2 = 19.
// 
// 
// 1)
// {13,7,4,20}
// {2,1}
// 
// Returns: -1
// 
// There is not enough space on the keys to fit all four letters.
// 
// 2)
// {11,23,4,50,1000,7,18}
// {3,1,4}
// 
// Returns: 1164
// 
// 
// 
// 3)
// {100,1000,1,10}
// {50}
// 
// Returns: 1234
// 
// 
// 
// 4)
// {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50}
// {10,10,10,10,10,10,10,10}
// 
// Returns: 3353
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
