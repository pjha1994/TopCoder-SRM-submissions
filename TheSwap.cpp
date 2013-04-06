#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cassert>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iterator>
#include <fstream>
using namespace std;

typedef long long 		int64;
typedef vector<int> 		vi;
typedef string 			ST;
typedef stringstream 		SS;
typedef vector< vector<int> > 	vvi;
typedef pair<int,int> 		ii;
typedef vector<string> 		vs;
/*
#if __cplusplus > 199711L	// for g++0x, value of __cplusplus must be greater thana 199711L.
	#define tr(i, c)	for(auto i = begin(c); i != end(c); i++)
#else
	#define tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#endif
*/
#define endl		("\n")
#define tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define PI		M_PI
#define E 		M_E
#define	eps		1e-9

#define	Sf		scanf
#define	Pf		printf

#define forn(i, n)	for(int i = 0, lets_stop_here = (int)n; i <  lets_stop_here; i++)
#define forab(i, a, b)	for(int i = a, lets_stop_here = (int)b; i <= lets_stop_here; i++)
#define rep(i, a, b)	for(int i = a, lets_stop_here = (int)b; i >= lets_stop_here; i--)

#define	all(c)		(c).begin(), (c).end()
#define	CL(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

#if (0 or defined ONLINE_JUDGE)
	#define DEBUG
#else 
	#define DEBUG(x)	cout << #x << " = " << x << "\n"
#endif

class TheSwap
{
public:
	int findMax(int n, int k);
};

int mx;

int TheSwap::findMax (int n, int k) 
{
	mx = -1;
	string st;
	stringstream ss;
	ss << n;
	ss >> st;
	sort(all(st));
	
	int cnt = 0;
	forn(i, st.size())
		if(st[i] != '0')
			cnt++;

	DEBUG(st);
	int ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	TheSwap *obj;
	int answer;
	obj = new TheSwap();
	clock_t startTime = clock();
	answer = obj->findMax(p0, p1);
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
	
	int p0;
	int p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = 16375;
	p1 = 1;
	p2 = 76315;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 432;
	p1 = 1;
	p2 = 423;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 90;
	p1 = 4;
	p2 = -1;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 5;
	p1 = 2;
	p2 = -1;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 436659;
	p1 = 2;
	p2 = 966354;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
// There is nothing more beautiful than just an integer number.
// 
// 
// 
// You are given an integer n.  Write down n in decimal notation with no leading zeroes, and let M be the number of written digits.  Perform the following operation exactly k times:
// 
// Choose two different 1-based positions, i and j, such that 1 &lt= i &lt j &lt= M. Swap the digits at positions i and j.  This swap must not cause the resulting number to have a leading zero, i.e., if the digit at position j is zero, then i must be strictly greater than 1.
// 
// 
// 
// 
// Return the maximal possible number you can get at the end of this procedure.  If it's not possible to perform k operations, return -1 instead.
// 
// 
// 
// DEFINITION
// Class:TheSwap
// Method:findMax
// Parameters:int, int
// Returns:int
// Method signature:int findMax(int n, int k)
// 
// 
// CONSTRAINTS
// -n will be between 1 and 1,000,000, inclusive.
// -k will be between 1 and 10, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 16375
// 1
// 
// Returns: 76315
// 
// The optimal way is to swap 1 and 7.
// 
// 1)
// 432
// 1
// 
// Returns: 423
// 
// In this case the result is less than the given number.
// 
// 2)
// 90
// 4
// 
// Returns: -1
// 
// We can't make even a single operation because it would cause the resulting number to have a leading zero.
// 
// 3)
// 5
// 2
// 
// Returns: -1
// 
// Here we can't choose two different positions for an operation.
// 
// 4)
// 436659
// 2
// 
// Returns: 966354
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!