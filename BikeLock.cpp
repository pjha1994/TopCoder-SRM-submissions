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

#if (0)
	#define debug 
#else 
	#define debug(x)	cout << #x << " = " << x << "\n"
#endif

class BikeLock
{
public:
	int minTurns(string current, string desired);
};

int dist(int a, int x) {
	a -= '0';
	x -= '0';
	return a == x ? 0 : 1;
}
int dist(int a, int b, int x, int y) {
	a -= '0'; b -= '0';
	x -= '0'; y -= '0';
	int d1 = x-a, d2 = y-b;
	d1 = (d1 % 10 + 10) % 10;
	d2 = (d2 % 10 + 10) % 10;
	if(a == x  && y == b)
		return 0;
	else if (a == x || b == y)
		return 1;
//	else if(x-a == y-b)
	else if(d1 == d2)
		return 1;
	else
		return 2;
}

int dist(int a, int b, int c, int x, int y, int z) {
	a -= '0'; b -= '0'; c -= '0';
	x -= '0'; y -= '0'; z -= '0';

	int d1 = a == x ? 1 : 0;
	int d2 = b == y ? 1 : 0;
	int d3 = c == z ? 1 : 0;

	int p1 = a-x, p2 = b-y, p3 = c - z;
	p1 = (p1 % 10 + 10) % 10;
	p2 = (p2 % 10 + 10) % 10;
	p3 = (p3 % 10 + 10) % 10;

	if(d1 + d2 + d3 == 3) 
		return 0;
	if(d1 + d2 + d3 == 2)
		return 1;
	if(p1 == p2 && p1 == p3)
		return 1;

	if(d1 + d2 + d3 == 1)
		return 2;
	if(p1 == p2 || p1 == p3 || p2 == p3)
		return 2;
	return 3;
}

int Ans[55];

string s, t;

int doit(int id) {
	if(id < 0)
		return 0;
	int &ret = Ans[id];
	if(ret > -1)
		return ret;

	if(id == 0) {
		return ret = dist(s[0], t[0]);
	}
	else if(id == 1) {
		return ret = min(doit(0) + dist(s[1], t[1]), dist(s[0], s[1], t[0], t[1]));
	}
	else if(id == 2) {
		ret = dist(s[0], s[1], s[2], t[0], t[1], t[2]);
		ret = min(ret, doit(1) + dist(s[2], t[2]));
		ret = min(ret, doit(0) + dist(s[1], s[2], t[1], t[2]));
		return ret;
	}
	else {
		ret = doit(id-1) + dist(s[id], t[id]);
		ret = min(ret, doit(id-2) + dist(s[id-1], s[id], t[id-1], t[id]));
		ret = min(ret, doit(id-3) + dist(s[id-2], s[id-1], s[id], t[id-2], t[id-1], t[id]));
		return ret;
	}
}

int BikeLock::minTurns (string current, string desired) 
{
	CL(Ans, -1);
	s = current;
	t = desired;
	doit(s.size()-1);

	forn(i, s.size())
		Pf("%2c ", s[i]);
	cout << endl;
	forn(i, s.size())
		Pf("%2c ", t[i]);
	cout << endl;

	forn(i, s.size())
		Pf("%2d ", Ans[i]);
	cout << endl;


	return doit(s.size()-1);
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	BikeLock *obj;
	int answer;
	obj = new BikeLock();
	clock_t startTime = clock();
	answer = obj->minTurns(p0, p1);
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
	
	string p0;
	string p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = "555";
	p1 = "464";
	p2 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "1234";
	p1 = "3456";
	p2 = 2;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "06012005";
	p1 = "06012005";
	p2 = 0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "123456789";
	p1 = "567412490";
	p2 = 5;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "23887547676234543215443276347856987698648735634265";
	p1 = "14327805497625497814327632146531429785698765309822";
	p2 = 34;
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
// One kind of combination lock often used on bicycles and notebook computers consists of several parallel disks with the digits '0' to '9' printed in order on the outside surface of the disks.  To dial a combination, you turn the disks so that the appropriate digit on each disk lines up with a reference mark.
// Each time you turn a disk, you rotate it up to three positions clockwise or counterclockwise.  By grasping several disks with your fingertips, 
// you can simultaneously turn up to three adjacent disks by the same amount.  Note that '0' and '9' are adjacent on the disks.
// 
// 
// 
// Given the current numbers showing on each disk (as a string) and the desired numbers (also as a string), find the
// minimum number of turns needed to dial the desired combination.  For example, if the current numbers are "555" and the desired numbers are "464", then one way to dial the combination would be to turn each disk separately, taking 3 turns altogether.  However, a better way to dial the combination is to turn all three disks simultaneously to "444" and then turn the middle disk by itself to "6", taking 2 turns altogether.
// 
// 
// DEFINITION
// Class:BikeLock
// Method:minTurns
// Parameters:string, string
// Returns:int
// Method signature:int minTurns(string current, string desired)
// 
// 
// CONSTRAINTS
// -current contains between 3 and 50 characters, inclusive.
// -desired is the same length as current.
// -current contains only digits ('0'-'9').
// -desired contains only digits ('0'-'9').
// 
// 
// EXAMPLES
// 
// 0)
// "555"
// "464"
// 
// Returns: 2
// 
// The example above.
// 
// 1)
// "1234"
// "3456"
// 
// Returns: 2
// 
// If you could turn four disks simultaneously, you could do this in 1 turn.  But you can't turn more than three disks at once, so it takes 2 turns.
// 
// 2)
// "06012005"
// "06012005"
// 
// Returns: 0
// 
// 3)
// "123456789"
// "567412490"
// 
// Returns: 5
// 
// 4)
// "23887547676234543215443276347856987698648735634265"
// "14327805497625497814327632146531429785698765309822"
// 
// Returns: 34
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!