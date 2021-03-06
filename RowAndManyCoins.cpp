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

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int) b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i>=loop_ends_here; i--)

class RowAndManyCoins
{
public:
	string getWinner(string cells)
	{
		cells.erase(unique(all(cells)), cells.end());
		
		return (count (all(cells), 'A') >= count(all(cells), 'B')) ? "Alice" : "Bob";
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	RowAndManyCoins *obj;
	string answer;
	obj = new RowAndManyCoins();
	clock_t startTime = clock();
	answer = obj->getWinner(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p1 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	
	string p0;
	string p1;
	
	{
	// ----- test 0 -----
	p0 = "ABBB";
	p1 = "Alice";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "BBBB";
	p1 = "Bob";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "BA";
	p1 = "Alice";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "BABBABBB";
	p1 = "Bob";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "ABABBBABAABBAA";
	p1 = "Alice";
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "BBBAAABBAAABBB";
	p1 = "Bob";
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
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
// Alice and Bob play the following game. 
// The game board consists of some cells in a row. 
// Each cell is marked either 'A' or 'B'. 
// At the beginning, there are no coins placed on the board – all the cells are empty. 
// Alice and Bob take alternating turns. 
// Alice plays first. 
// In each turn, the current player chooses some contiguous empty cells and places a coin onto each of the chosen cells. 
// The player must always choose at least one cell. 
// The player must never choose all empty cells. 
// In other words, after each turn there must be at least one empty cell. 
// 
// The following picture shows two examples of placing coins: 
// 
// 
// 
// The game ends when there is only one cell left without a coin. 
// If that cell is marked 'A', Alice wins. 
// Otherwise, Bob wins. 
// You are given a string cells representing the row of cells. 
// Assuming that both players aim to win and play optimally, return a string containing the name of the winner. 
// 
// 
// DEFINITION
// Class:RowAndManyCoins
// Method:getWinner
// Parameters:string
// Returns:string
// Method signature:string getWinner(string cells)
// 
// 
// CONSTRAINTS
// -cells will contain between 2 and 50 characters, inclusive. 
// -Each character in cells will be either 'A' or 'B'. 
// 
// 
// EXAMPLES
// 
// 0)
// "ABBB"
// 
// Returns: "Alice"
// 
// Alice can win by placing coins on three cells marked 'B' in her first turn. 
// 
// 
// 1)
// "BBBB"
// 
// Returns: "Bob"
// 
// 2)
// "BA"
// 
// Returns: "Alice"
// 
// 3)
// "BABBABBB"
// 
// Returns: "Bob"
// 
// 4)
// "ABABBBABAABBAA"
// 
// Returns: "Alice"
// 
// 5)
// "BBBAAABBAAABBB"
// 
// Returns: "Bob"
// 
// END KAWIGIEDIT TESTING



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
