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
#include <iterator>
#include <fstream>
using namespace std;

typedef long long  int64;
typedef vector<int> vi;
typedef string ST;
typedef stringstream SS;
typedef vector< vector <int> > vvi;
typedef pair<int,int> ii;
typedef vector <string> vs;

#define DEBUG(x)	cout << #x << " = " << x << "\n"
#define endl 		("\n")

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

#define Pf		printf
#define	Sf		scanf

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

/*
#ifdef DEBUG
	#undef DEBUG
#endif
#define DEBUG
*/

class ComputationalComplexity
{
public:
	int fastestAlgo(vector <int> constant, vector <int> power, vector <int> logPower, int N);
};

int ComputationalComplexity::fastestAlgo (vector <int> constant, vector <int> power, vector <int> logPower, int N) 
{
	int ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, vector <int> p2, int p3, bool hasAnswer, int p4) {
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
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}" << "," << p3;
	cout << "]" << endl;
	ComputationalComplexity *obj;
	int answer;
	obj = new ComputationalComplexity();
	clock_t startTime = clock();
	answer = obj->fastestAlgo(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p4 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p4;
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
	vector <int> p2;
	int p3;
	int p4;
	
	{
	// ----- test 0 -----
	int t0[] = {5,50,45};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,1,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0,1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 400;
	p4 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {5,50,45};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,1,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0,1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 10;
	p4 = 0;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {100};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {5};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {5};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 1000;
	p4 = 0;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {32,33,58,93,8,27,43,69,95,77,57,73,87,87,50,92,67,20,2,46,73,48,25,90,48,18,28,26,20,33,59,48,69,4,19,13,10,78,55,90};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {5,0,1,4,0,3,5,4,3,3,0,5,0,5,5,3,0,4,1,1,4,0,2,4,0,0,3,2,0,0,4,3,5,0,2,4,3,4,3,0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {2,2,2,0,4,5,2,3,4,5,0,0,1,4,2,5,2,4,5,0,5,4,3,0,4,1,1,3,3,0,1,5,2,1,1,4,0,0,2,3};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 1000;
	p4 = 33;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) && all_right;
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
// You are testing several algorithms and you want to find the fastest one for your task. Computational complexities of these algorithms will be given to you in three vector <int>s - constant, power and logPower. The ith algorithm needs on average constant[i]*Npower[i]*lnlogPower[i](N) operations to solve your task.
// 
// Given an int N, the size of your task, return the 0-based index of the fastest algorithm. In case of a tie, return the smallest index.
// 
// DEFINITION
// Class:ComputationalComplexity
// Method:fastestAlgo
// Parameters:vector <int>, vector <int>, vector <int>, int
// Returns:int
// Method signature:int fastestAlgo(vector <int> constant, vector <int> power, vector <int> logPower, int N)
// 
// 
// NOTES
// -ln(x) in the formula means natural logarithm of x. It can be computed as: - Math.log(x) in java - log(x) in C++ - Math.Log(x) in C# and VB.
// 
// 
// CONSTRAINTS
// -constant, power and logPower will have the same number of elements.
// -constant, power and logPower will each have between 1 and 50 elements, inclusive.
// -N will be between 1 and 1000, inclusive.
// -All elements of power and logPower will be between 0 and 5, inclusive.
// -All elements of constant will be between 1 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {5, 50, 45}
// {2, 1, 1}
// {0, 1, 1}
// 400
// 
// Returns: 2
// 
// The first algorithm needs 5*400*400 = 800000 operations. The second one needs about 50*400*ln(400) (approximately 170000)  and the third is even a bit faster.
// 
// 1)
// {5, 50, 45}
// {2, 1, 1}
// {0, 1, 1}
// 10
// 
// Returns: 0
// 
// For the small N the first algorithm works faster.
// 
// 2)
// {100}
// {5}
// {5}
// 1000
// 
// Returns: 0
// 
// 3)
// {32, 33, 58, 93, 8, 27, 43, 69, 95, 77,
//  57, 73, 87, 87, 50, 92, 67, 20, 2, 46,
//  73, 48, 25, 90, 48, 18, 28, 26, 20, 33,
//  59, 48, 69, 4, 19, 13, 10, 78, 55, 90}
// {5, 0, 1, 4, 0, 3, 5, 4, 3, 3,
//  0, 5, 0, 5, 5, 3, 0, 4, 1, 1,
//  4, 0, 2, 4, 0, 0, 3, 2, 0, 0,
//  4, 3, 5, 0, 2, 4, 3, 4, 3, 0}
// {2, 2, 2, 0, 4, 5, 2, 3, 4, 5,
//  0, 0, 1, 4, 2, 5, 2, 4, 5, 0,
//  5, 4, 3, 0, 4, 1, 1, 3, 3, 0,
//  1, 5, 2, 1, 1, 4, 0, 0, 2, 3}
// 1000
// 
// Returns: 33
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
