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

class FastPostman
{
public:
	int minTime(vector <int> address, vector <int> maxTime, int initialPos);
};

const int INF = 1e8 + 1e8;
int dp[2][55][55];
vi add, mxTime;
int N;
int start;

int solve(int side, int l , int r) {
	int &ret = dp[side][l][r];
	if(ret > -1)
		return ret;
	ret = INF;
	if(l == r) {
		ret = abs(start - add[l]);
		if(ret > mxTime[l])
			ret = INF;
		return ret;
	}
	if(side == 0) {
		ret = min(solve(0, l+1, r) + add[l+1] - add[l], solve(1, l+1, r) + add[r] - add[l]);
		if(ret > mxTime[l])
			ret = INF;
		return ret;
	}
	ret = min(solve(0, l, r-1) + add[r] - add[l], solve(1, l, r-1) + add[r] - add[r-1]);
	if(ret > mxTime[r])
		ret = INF;
	return ret;
}

int FastPostman::minTime (vector <int> address, vector <int> maxTime, int initialPos) 
{  
    int i, j, n = address.size(), res;
    N = n;
    ii tmp[55];

    forn(i, n)
	    tmp[i] = mp(address[i], maxTime[i]);
    sort(tmp, tmp+n);
    forn(i, n) {
	    address[i] = tmp[i].first;
	    maxTime[i] = tmp[i].second;
    }
    add = address;
    mxTime = maxTime;
    start = initialPos;
    

    CL(dp, -1);
    int ret = min(solve(0, 0, N-1), solve(1, 0, N-1));
    return ret == INF ? -1 : ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, int p2, bool hasAnswer, int p3) {
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
	cout << "}" << "," << p2;
	cout << "]" << endl;
	FastPostman *obj;
	int answer;
	obj = new FastPostman();
	clock_t startTime = clock();
	answer = obj->minTime(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p3;
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
	int p3;
	
	{
	// ----- test 0 -----
	int t0[] = {1,3,5,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {9,2,5,100};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 4;
	p3 = 13;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {6,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 3;
	p3 = 6;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1000000};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {45634};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 876;
	p3 = -1;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1,7,10,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {15,6,28,39};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 2;
	p3 = 20;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {1000000,1000000,1000000,1000000};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {563,23452,32426,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1000000;
	p3 = 0;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
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
// A postman has to deliver several letters along a street. He has the address (in the form of the number of meters from the left end of the street to the destination of the letter) and the maximum time he can take to deliver each letter. The postman moves at 1 meter per second and can deliver a letter instantly once he reaches the right location. You need to find out if it's possible to make all the deliveries within the given constraints, and if so, the minimum time the postman can take to do it.
// 
// You will be given two vector <int>s address and maxTime, where the ith element of each represents the address and maximum time of delivery of the ith letter. You will also be given an int initialPos with the initial position of the postman (in the same units and format as the addresses). Return the minimum amount of time the postman needs to deliver all letters within the constraints or -1 if it's impossible to do so.
// 
// 
// DEFINITION
// Class:FastPostman
// Method:minTime
// Parameters:vector <int>, vector <int>, int
// Returns:int
// Method signature:int minTime(vector <int> address, vector <int> maxTime, int initialPos)
// 
// 
// CONSTRAINTS
// -address will contain between 1 and 50 elements, inclusive.
// -address and maxTime will contain the same number of elements.
// -Each element of address will be between 1 and 1000000 (106), inclusive.
// -Each element of maxTime will be between 1 and 1000000000 (109), inclusive.
// -initialPos will be between 1 and 1000000 (106), inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,3,5,7}
// {9,2,5,100}
// 4
// 
// Returns: 13
// 
// The only way to deliver all the letters within the maximum times is to go through all the houses in the following order: 3-5-1-7.
// 
// 1)
// {1,5}
// {6,2}
// 3
// 
// Returns: 6
// 
// If the postman starts from the house with address 5, he will make both just in time.
// 
// 2)
// {1000000}
// {45634}
// 876
// 
// Returns: -1
// 
// No way!
// 
// 3)
// {1,7,10,4}
// {15,6,28,39}
// 2
// 
// Returns: 20
// 
// 
// 
// 4)
// {1000000,1000000,1000000,1000000}
// {563,23452,32426,1}
// 1000000
// 
// Returns: 0
// 
// The postman is lucky and starts right in front of the only house that has correspondence.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
