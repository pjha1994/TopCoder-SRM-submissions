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
#define	SZ(a)	int((a).size())

#define	all(c)	(c).begin(), (c).end()
#define	tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define	forn(i, n)	for(int i = 0; i < n; i++)
#define	forab(i, a, b)	for(int i = a; i <= b; i++)
#define	rep(i, a, b)	for(int i = a; i>=b; i--)

int Abs(int x) {
	return x < 0 ? -x : x;
}

class SlimeXSlimeRancher2
{
public:
	int train(vector <int> A)
	{
		int ret = 0;
		
		int x = *max_element(all(A));
		cout << x << endl;
		
		tr(it, A)
			ret += Abs(*it - x), Pf("*it = %d, abs = %d, sum = %d\n", *it, Abs(*it - x), ret);
			
		
		return ret;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	SlimeXSlimeRancher2 *obj;
	int answer;
	obj = new SlimeXSlimeRancher2();
	clock_t startTime = clock();
	answer = obj->train(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	
	{
	// ----- test 0 -----
	int t0[] = {1,2,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {5,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {900,500,100};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1200;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
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
// You are playing a game titled Slime Rancher 2. You will be training slimes in this game.
// 
// 
// You have a slime-in-training. Associated with the slime are N attributes, numbered 0 through N-1, each represented by a positive integer. You are given vector <int> attributes containing N integers : the i-th integer is the initial value of the i-th attribute for the slime. After the training is complete, each of the slime's attributes will either stay the same or increase to some positive integer less than or equal to 999. None of the attributes will decrease in value. The weight of the training is defined as the sum of the differences between the final and initial values of all the attributes for the slime.
// 
// 
// You are a master slime breeder, and you're able to obtain any possible final values for a slime's attributes. This time, you would like to create a well-balanced slime. A slime is well-balanced if all of its attributes have equal values. What is the minimum possible weight of the training?
// 
// DEFINITION
// Class:SlimeXSlimeRancher2
// Method:train
// Parameters:vector <int>
// Returns:int
// Method signature:int train(vector <int> attributes)
// 
// 
// CONSTRAINTS
// -attributes will contain between 2 and 50 elements, inclusive.
// -Each element of attributes will be between 1 and 999, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,2,3}
// 
// Returns: 3
// 
// Train the slime such that all of its attributes are equal to 3. The total weight of the training is |3 - 1| + |3 - 2| + |3 - 3| = 3.
// 
// 1)
// {5,5}
// 
// Returns: 0
// 
// This slime is already well-balanced.
// 
// 2)
// {900,500,100}
// 
// Returns: 1200
// 
// 
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
