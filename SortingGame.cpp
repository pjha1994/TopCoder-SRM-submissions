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

class SortingGame
{
public:
	int fewestMoves(vector <int> board, int k);
};

bool check(const vi &v) {
	forab(i, 1, v.size()-1)
		if(v[i] < v[i-1])
			return false;
	return true;
}
map <vi, int> m;

void reverse(vi &v, int l, int k) {
	int r = l+k-1;
	while(l < r) {
		swap(v[l], v[r]);
		l++;
		r--;
	}
}

int SortingGame::fewestMoves (vector <int> board, int k) 
{
	m.clear();
	m[board] = 0;
	queue <vi > q;
	q.push(board);
	/*
	tr(it, board)
		write(*it);
	cout << endl;
	cout << endl;
	*/

	while (q.empty() == false) {
		const vi v = q.front();
		int d = m[v];
		q.pop();

		if(check(v)) {
			return d;
		}

		forn(i, board.size()-k+1) {
			vi tmp = v;
			reverse(tmp, i, k);
			/*
			tr(it, tmp)
				write(*it);
			cout << endl;
			*/
			if(m.find(tmp) == m.end()) {
				m[tmp] = d+1;
				q.push(tmp);
			}
		}
//		cout << endl;
	}
	return -1;
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
	SortingGame *obj;
	int answer;
	obj = new SortingGame();
	clock_t startTime = clock();
	answer = obj->fewestMoves(p0, p1);
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
	int t0[] = {1,2,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	p2 = 0;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {3,2,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	p2 = 1;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {5,4,3,2,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	p2 = 10;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {3,2,4,1,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4;
	p2 = -1;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {7,2,1,6,8,4,3,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4;
	p2 = 7;
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
// In The Sorting Game, you are given a sequence containing a permutation of the integers between 1 and n, inclusive.  In one move, you can take any k consecutive elements of the sequence and reverse their order.  The goal of the game is to sort the sequence in ascending order.  You are given a vector <int> board describing the initial sequence.  Return the fewest number of moves necessary to finish the game successfully, or -1 if it's impossible.
// 
// DEFINITION
// Class:SortingGame
// Method:fewestMoves
// Parameters:vector <int>, int
// Returns:int
// Method signature:int fewestMoves(vector <int> board, int k)
// 
// 
// CONSTRAINTS
// -board will contain between 2 and 8 elements, inclusive.
// -Each integer between 1 and the size of board, inclusive, will appear in board exactly once.
// -k will be between 2 and the size of board, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,2,3}
// 3
// 
// Returns: 0
// 
// The sequence is already sorted, so we don't need any moves.
// 
// 1)
// {3,2,1}
// 3
// 
// Returns: 1
// 
// We can reverse the whole sequence with one move here.
// 
// 2)
// {5,4,3,2,1}
// 2
// 
// Returns: 10
// 
// This one is more complex.
// 
// 3)
// {3,2,4,1,5}
// 4
// 
// Returns: -1
// 
// 
// 
// 4)
// {7,2,1,6,8,4,3,5}
// 4
// 
// Returns: 7
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!