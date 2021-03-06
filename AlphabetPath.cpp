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

#define writeln(n)	printf("%d\n", n)

#define isValid(i, j)	(i >= 0 && i < row && j >= 0 && j < col)

int X[] = { 1, -1,  0,  0};
int Y[] = { 0,  0, -1,  1};

int row, col;

class AlphabetPath
{
	vector <ST> maze;
	cout << "yes";

	bool dfs(int i, int j) {
		if(!isValid(i, j))	return false;
		if(maze[i][j] == 'Z')	return true;

		forn(k, 4) {
			int y = i + Y[k];
			int x = j + X[k];
			if(!isValid(y, x))	continue;
			if( maze[y][x] == maze[i][j] + 1 &&  dfs(y, x))	
				return true;
		}

		return false;
	}
	

public:
	string doesItExist(vector <string> _maze)
	{
		maze = _maze;
		row = maze.size();
		col = maze[0].size();

		forn(i, row)	forn(j, col)	if(maze[i][j] == 'A')	if(dfs(i, j))
			return "YES";
	
				
		return "NO";
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	AlphabetPath *obj;
	string answer;
	obj = new AlphabetPath();
	clock_t startTime = clock();
	answer = obj->doesItExist(p0);
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
	
	vector <string> p0;
	string p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"ADEHI..Z","BCFGJK.Y",".PONML.X",".QRSTUVW"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"ACBDEFGHIJKLMNOPQRSTUVWXYZ"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"ABC.......","...DEFGHIJ","TSRQPONMLK","UVWXYZ...."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"..............","..............","..............","...DEFGHIJK...","...C......L...","...B......M...","...A......N...","..........O...","..ZY..TSRQP...","...XWVU.......",".............."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
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
// You are given a 2-dimensional matrix of characters represented by the vector <string> letterMaze. The i-th character of the j-th element of letterMaze  represents the character at row i and column j. Each of the 26 letters from 'A' to 'Z' appears exactly once in letterMaze, the remaining characters are periods ('.').
// 
// An alphabet path is a sequence of 26 elements of the matrix such that:
// 
// The first element contains the letter 'A'.
// The first element and the second element are (horizontally or vertically) adjacent.
// The second element contains the letter 'B'.
// The second element and the third element are (horizontally or vertically) adjacent.
// ...
// The 25-th element and the 26-th element are (horizontally or vertically) adjacent.
// The last, 26-th element contains the letter 'Z'.
// 
// Given letterMaze return string "YES" if the alphabet path exists in the matrix and "NO" otherwise.
// 
// DEFINITION
// Class:AlphabetPath
// Method:doesItExist
// Parameters:vector <string>
// Returns:string
// Method signature:string doesItExist(vector <string> letterMaze)
// 
// 
// NOTES
// -Formally, elements (x1,y1) and (x2,y2) are horizontally or vertically adjacent if and only if abs(x1 - x2) + abs(y1 - y2) = 1. 
// 
// 
// CONSTRAINTS
// -letterMaze will contain between 1 and 50 elements, inclusive.
// -Each element of letterMaze will contain between 1 and 50 characters, inclusive.
// -All the elements of letterMaze will contain the same number of characters.
// -Each element of letterMaze will only contain uppercase letters ('A'-'Z') and periods ('.').
// -Each uppercase letter from 'A' to 'Z' will appear exactly once in letterMaze.
// 
// 
// EXAMPLES
// 
// 0)
// {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}
// 
// Returns: "YES"
// 
// Simply go from left to right.
// 
// 1)
// {"ADEHI..Z",
//  "BCFGJK.Y",
//  ".PONML.X",
//  ".QRSTUVW"}
// 
// 
// Returns: "YES"
// 
// 
// 
// 2)
// {"ACBDEFGHIJKLMNOPQRSTUVWXYZ"}
// 
// Returns: "NO"
// 
// 
// 
// 3)
// {"ABC.......",
//  "...DEFGHIJ",
//  "TSRQPONMLK",
//  "UVWXYZ...."}
// 
// Returns: "NO"
// 
// The cells marked with C and D are not adjacent, it is impossible to make an alphabet path in this case.
// 
// 4)
// {"..............",
//  "..............",
//  "..............",
//  "...DEFGHIJK...",
//  "...C......L...",
//  "...B......M...",
//  "...A......N...",
//  "..........O...",
//  "..ZY..TSRQP...",
//  "...XWVU.......",
//  ".............."}
// 
// Returns: "YES"
// 
// 
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
