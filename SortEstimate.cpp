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

#define Pf	printf
#define	Sf	scanf

#define	ep	1e-9
#define PI M_PI
#define E M_E

#define	CL(a, b)	memset(a, b, sizeof(a))
#define	mp	make_pair

#define	pb	push_back

#define	all(c)	(c).begin(), (c).end()
#define	tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define	forn(i, n)	for(int i = 0; i < n; i++)
#define	forab(i, a, b)	for(int i = a; i <= b; i++)
#define	rep(i, a, b)	for(int i = a; i>=b; i--)

#define lg(n)  ( log(n) / log(2) ) 

#define f(c, n)		(c*n*lg(n))

class SortEstimate
{
public:
	double howMany(int c, int time)
	{

		double low = 0.0, high = 1e20, mid;

		forn(i, 400) {
			mid = (low + high) / 2;

			if(f(c, mid) <= time)
				low = mid;
			else
				high = mid;
		}
		return low;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, double p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	SortEstimate *obj;
	double answer;
	obj = new SortEstimate();
	clock_t startTime = clock();
	answer = obj->howMany(p0, p1);
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
		res = answer == answer && fabs(p2 - answer) <= 1e-9 * max(1.0, fabs(p2));
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
	double p2;
	
	{
	// ----- test 0 -----
	p0 = 1;
	p1 = 8;
	p2 = 4.0;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 2;
	p1 = 16;
	p2 = 4.0;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 37;
	p1 = 12392342;
	p2 = 23104.999312341137;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 1;
	p1 = 2000000000;
	p2 = 7.637495090348122E7;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 1;
	p1 = 1;
	p2 = 1.5596104694623691;
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
// You have implemented a sorting algorithm that requires exactly c*n*lg(n) nanoseconds to sort n integers.  Here lg denotes the base-2 logarithm.  Given time nanoseconds, return the largest double n such that c*n*lg(n) <= time.
// 
// DEFINITION
// Class:SortEstimate
// Method:howMany
// Parameters:int, int
// Returns:double
// Method signature:double howMany(int c, int time)
// 
// 
// NOTES
// -lg(n) = ln(n)/ln(2) where ln denotes the natural log.
// -Your return value must have a relative or absolute error less than 1e-9.
// 
// 
// CONSTRAINTS
// -c will be between 1 and 100 inclusive.
// -time will be between 1 and 2000000000 inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 1
// 8
// 
// Returns: 4.0
// 
// Given 8 nanoseconds we can sort 4 integers since 
// 	1*4*lg(4) = 4*2 = 8
// 
// 1)
// 2
// 16
// 
// Returns: 4.0
// 
// Now that c = 2 we need twice as many nanoseconds to sort 4 integers.
// 
// 2)
// 37
// 12392342
// 
// Returns: 23104.999312341137
// 
// We can almost sort 23105 integers, but not quite.
// 
// 3)
// 1
// 2000000000
// 
// Returns: 7.637495090348122E7
// 
// Largest possible return.
// 
// END KAWIGIEDIT TESTING



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
