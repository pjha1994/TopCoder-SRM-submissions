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

#define	eps		1e-9
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

class HairCuts
{
public:
	double maxCut(vector <string> enter, string lastExit);
};

double lastExit;
vi enter;

int strToMin(string st) {
	int h = atoi(st.substr(0, 2).c_str()), m = atoi(st.substr(3).c_str());
	if(h >= 9 && h <= 12)
		h -= 9;
	else
		h += 3;
	return h*60 + m;
}

double exitTime(double val) {
	vector <double> start(enter.size());
	start[0] = enter[0];

	forab(i, 1, enter.size()-1) 
		start[i] = max((double)enter[i], start[i-1] + val);

	return start.back() + val;
}

double HairCuts::maxCut (vector <string> _enter, string _lastExit) 
{
	enter.clear();
	tr(it, _enter)
		enter.pb(strToMin(*it));
	sort(all(enter));
	lastExit = strToMin(_lastExit);
	double l = 5, h = 12*60, m;

	forn(abcd, 1000) {
		m = (l+h)/2;
		double endTime = exitTime(m);

		if(endTime >= lastExit)
			h = m;
		else
			l = m;
	}

	return abs(exitTime(l) - lastExit) <= eps ? l : -1;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, string p1, bool hasAnswer, double p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	HairCuts *obj;
	double answer;
	obj = new HairCuts();
	clock_t startTime = clock();
	answer = obj->maxCut(p0, p1);
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
	
	vector <string> p0;
	string p1;
	double p2;
	
	{
	// ----- test 0 -----
	string t0[] = {"04:22","09:00"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "05:52";
	p2 = 90.0;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"09:00","09:22","09:22"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "10:11";
	p2 = 23.666666666666863;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"09:00","04:00","04:02"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "04:09";
	p2 = -1.0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"04:40","10:54","12:30","03:46","04:48","01:57","04:47","10:29","10:39"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "05:21";
	p2 = 13.6666666666669;
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
// Our barbershop opens at 9:00 am and closes at 5:00 pm, but (of course) the
// barber keeps working until all the customers who entered the shop before 5:00 have been
// served.  Each customer enters the shop and if the barber is free, immediately starts
// getting his hair cut. Otherwise, the customer waits until everyone who entered before
// him has finished getting their hair cut. 
// 
// We have the sequence of times when customers entered the shop and we know when
// the last customer left the shop. We also know that each haircut took at least
// 5 minutes. We want to get a bound on how long the longest haircut took.
// 
// Create a class HairCuts that contains a method maxCut that is given vector <string>
// enter and string lastExit and that returns the smallest possible time (in
// minutes) that
// the longest haircut took. If the inputs are inconsistent with the rule that
// each haircut takes at least 5 minutes, return -1.
// 
// The enter times and the lastExit are 5 character strings in the format hh:mm with hh being a 12 hour time.
// 
// 
// 
// DEFINITION
// Class:HairCuts
// Method:maxCut
// Parameters:vector <string>, string
// Returns:double
// Method signature:double maxCut(vector <string> enter, string lastExit)
// 
// 
// NOTES
// -The returned value must be accurate to within a relative or absolute value of 1E-9.
// 
// 
// CONSTRAINTS
// -lastExit and all elements of enter are formatted as described in the statement.
// -enter contains between 1 and 50 elements, inclusive.
// -Each hh in enter will equal "09","10","11","12","01","02","03", or "04.
// -The hh in lastExit will equal "09","10","11","12","01",...,"05", or "06".
// -Each time will have mm equal to "00","01",...,"58", or "59".
// -lastExit will be a time that is later than every enter time.
// 
// 
// EXAMPLES
// 
// 0)
// {"04:22","09:00"}
// "05:52"
// 
// Returns: 90.0
// 
// 
// 
//    At 9:00 the first customer entered. The last (second) customer entered at
//    4:22 and was not done until 5:52. For the first customer to have delayed
//    the second customer his cut would have to have taken more than 7 hours. So
//    the smallest time for the longest haircut occurs when the first customer
//    has a short cut, and the second customer is getting his hair cut all the
//    time he is in the shop (from 4:22 to 5:52) which is 90 minutes.
// 
// 
// 
// 
// 
// 
// 
// 1)
// {"09:00","09:22","09:22"}
// "10:11"
// 
// Returns: 23.666666666666863
// 
// 
// 
//    If the first customer's cut takes 23 2/3 minute then the second and third
//    customers are already waiting. They could both take the same amount of time.
//    Since this keeps the barber busy all the time with 3 equal length haircuts,
//    this must be the smallest time for the longest haircut.
// 
// 2)
// {"09:00","04:00","04:02"}
// "04:09"
// 
// Returns: -1.0
// 
// 
// 
//    This data would require two customers to get haircuts between 4:00 and 4:09
//    and that would violate the rule that each haircut takes at least 5 minutes.
// 
// 
// 3)
// {  "04:40", "10:54", "12:30", "03:46", "04:48", "01:57", "04:47", "10:29", "10:39"} 
// "05:21"
// 
// Returns: 13.6666666666669
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
