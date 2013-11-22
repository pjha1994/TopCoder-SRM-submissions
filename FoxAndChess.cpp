#include <bits/stdc++.h>
using namespace std;

class FoxAndChess
{
public:
	string ableToMove(string begin, string target);
};

string FoxAndChess::ableToMove (string begin, string target) 
{
  string succ = "Possible", fail = "Impossible";
  vector <pair <char, int> > beg, tar;
  int N = begin.size();

  for(int i = 0; i < (int)N; ++i) {
    if(begin[i] != '.'){
      beg.push_back(make_pair(begin[i], i));
    }
    if(target[i] != '.')
      tar.push_back(make_pair(target[i], i));
  }

  N = beg.size();
  if(tar.size()!=beg.size())
    return fail;
/*
  for(int i = 0; i < (int)N; ++i) {
    printf("(%c: %d), ", beg[i].first, beg[i].second);
  }
  cout << "\n";
  for(int i = 0; i < (int)N; ++i) {
    printf("(%c: %d), ", tar[i].first, tar[i].second);
  }
  cout << "\n";
*/
  for(int i = 0; i < (int)N; ++i) {
    if(beg[i].first != tar[i].first)
      return fail;
    if(beg[i].first == 'R' && beg[i].second > tar[i].second)
      return fail;
    if(beg[i].first == 'L' && beg[i].second < tar[i].second)
      return fail;
  }

  return succ;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	FoxAndChess *obj;
	string answer;
	obj = new FoxAndChess();
	clock_t startTime = clock();
	answer = obj->ableToMove(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p2 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	string p2;
	
	{
	// ----- test 0 -----
	p0 = "R...";
	p1 = "..R.";
	p2 = "Possible";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "..R.";
	p1 = "R...";
	p2 = "Impossible";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = ".L.R.R.";
	p1 = "L...R.R";
	p2 = "Possible";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = ".L.R.";
	p1 = ".R.L.";
	p2 = "Impossible";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "LRLLRLRLLRLLRLRLRL";
	p1 = "LRLLRLRLLRLLRLRLRL";
	p2 = "Possible";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "L";
	p1 = ".";
	p2 = "Impossible";
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
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
// Fox Ciel is playing a game with some chess pawns and a strip of paper.
// The strip of paper is divided into a row of cells.
// Each cell can contain at most one pawn.
// The white pawns will be denoted 'R', because they are only allowed to move to the right.
// The black pawns will be denoted 'L', because they are only allowed to move to the left.
// 
// 
// You are given a string begin that describes the current state of the strip: 'R' and 'L' are cells with corresponding pawns, and '.' are empty cells.
// 
// 
// You are now allowed to make some moves (as many as you wish, possibly zero).
// In each move you may either take a 'R' pawn and move it one cell to the right, or take a 'L' pawn and move it one cell to the left.
// Of course, both types of moves are only valid if the destination cell is currently empty.
// Pawns are not allowed to move out of bounds.
// 
// 
// You are also given a string target that represents the desired state of the strip.
// If it is possible to reach target from begin by making some valid moves, return "Possible" (quotes for clarity), otherwise return "Impossible".
// 
// DEFINITION
// Class:FoxAndChess
// Method:ableToMove
// Parameters:string, string
// Returns:string
// Method signature:string ableToMove(string begin, string target)
// 
// 
// CONSTRAINTS
// -begin will contain between 1 and 50 elements, inclusive.
// -begin and target will contain the same number of elements.
// -Each character in begin and target will be one of '.', 'L' and 'R'.
// 
// 
// EXAMPLES
// 
// 0)
// "R..."
// "..R."
// 
// Returns: "Possible"
// 
// You have to move the only pawn to the right twice.
// 
// 1)
// "..R."
// "R..."
// 
// Returns: "Impossible"
// 
// Here target cannot be reached because the only pawn is only allowed to move to the right.
// 
// 2)
// ".L.R.R."
// "L...R.R"
// 
// Returns: "Possible"
// 
// 
// 
// 3)
// ".L.R."
// ".R.L."
// 
// Returns: "Impossible"
// 
// 
// 
// 4)
// "LRLLRLRLLRLLRLRLRL"
// "LRLLRLRLLRLLRLRLRL"
// 
// Returns: "Possible"
// 
// 
// 
// 5)
// "L"
// "."
// 
// Returns: "Impossible"
// 
// 
// 
// END KAWIGIEDIT TESTING



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!