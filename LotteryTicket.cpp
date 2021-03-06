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

class LotteryTicket
{
public:
	string buy(int price, int b1, int b2, int b3, int b4);
};

const int sz = 4e3 + 111;
int isPossible[sz];

int a1, a2, a3, a4;

int check(int n) {
	if(n < 0)
		return 0;
	int &ans = isPossible[n];

	if(ans > -1)
		return ans;
	ans = 0;
	if(check(n-a1) + check(n-a2) + check(n-a3) + check(n-a4) > 0)
		ans = 1;
	return ans;
}

string LotteryTicket::buy (int price, int b1, int b2, int b3, int b4) 
{
	memset(isPossible, -1, sizeof (isPossible));
	isPossible[0] = 0;

	a1 = b1;
	a2 = b2;
	a3 = b3;
	a4 = b4;

	string ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, int p2, int p3, int p4, bool hasAnswer, string p5) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << p2 << "," << p3 << "," << p4;
	cout << "]" << endl;
	LotteryTicket *obj;
	string answer;
	obj = new LotteryTicket();
	clock_t startTime = clock();
	answer = obj->buy(p0, p1, p2, p3, p4);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p5 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p5;
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
	int p3;
	int p4;
	string p5;
	
	{
	// ----- test 0 -----
	p0 = 10;
	p1 = 1;
	p2 = 5;
	p3 = 10;
	p4 = 50;
	p5 = "POSSIBLE";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 15;
	p1 = 1;
	p2 = 5;
	p3 = 10;
	p4 = 50;
	p5 = "POSSIBLE";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 65;
	p1 = 1;
	p2 = 5;
	p3 = 10;
	p4 = 50;
	p5 = "POSSIBLE";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 66;
	p1 = 1;
	p2 = 5;
	p3 = 10;
	p4 = 50;
	p5 = "POSSIBLE";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 1000;
	p1 = 999;
	p2 = 998;
	p3 = 997;
	p4 = 996;
	p5 = "IMPOSSIBLE";
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 20;
	p1 = 5;
	p2 = 5;
	p3 = 5;
	p4 = 5;
	p5 = "POSSIBLE";
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	p0 = 2;
	p1 = 1;
	p2 = 5;
	p3 = 10;
	p4 = 50;
	p5 = "IMPOSSIBLE";
	all_right = KawigiEdit_RunTest(6, p0, p1, p2, p3, p4, true, p5) && all_right;
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
// Nick likes to play the lottery.  The cost of a single lottery ticket is price.  Nick has exactly four banknotes with values b1, b2, b3 and b4 (some of the values may be equal).  He wants to know if it's possible to buy a single lottery ticket without getting any change back.  In other words, he wants to pay the exact price of a ticket using any subset of his banknotes.  Return "POSSIBLE" if it is possible or "IMPOSSIBLE" if it is not (all quotes for clarity).
// 
// 
// DEFINITION
// Class:LotteryTicket
// Method:buy
// Parameters:int, int, int, int, int
// Returns:string
// Method signature:string buy(int price, int b1, int b2, int b3, int b4)
// 
// 
// CONSTRAINTS
// -price will be between 1 and 4000, inclusive.
// -b1, b2, b3 and b4 will each be between 1 and 1000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 10
// 1
// 5
// 10
// 50
// 
// Returns: "POSSIBLE"
// 
// Nick can use the banknote with value b3.
// 
// 1)
// 15
// 1
// 5
// 10
// 50
// 
// Returns: "POSSIBLE"
// 
// Here he can use the banknotes with values b2 and b3.
// 
// 2)
// 65
// 1
// 5
// 10
// 50
// 
// Returns: "POSSIBLE"
// 
// b2 + b3 + b4 is 65.
// 
// 3)
// 66
// 1
// 5
// 10
// 50
// 
// Returns: "POSSIBLE"
// 
// All four banknotes must be used.
// 
// 4)
// 1000
// 999
// 998
// 997
// 996
// 
// Returns: "IMPOSSIBLE"
// 
// 5)
// 20
// 5
// 5
// 5
// 5
// 
// Returns: "POSSIBLE"
// 
// Some of the banknote values may be equal.
// 
// 6)
// 2
// 1
// 5
// 10
// 50
// 
// Returns: "IMPOSSIBLE"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
