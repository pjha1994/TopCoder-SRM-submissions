#include <bits/stdc++.h>
using namespace std;

class LittleElephantAndString
{
public:
	int getNumber(string A, string B);
};

int LittleElephantAndString::getNumber (string A, string B) 
{
  string aa(A), bb(B);
  sort(aa.begin(), aa.end());
  sort(bb.begin(), bb.end());
  if(aa != bb)
    return -1;
	int ret = 10000;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	LittleElephantAndString *obj;
	int answer;
	obj = new LittleElephantAndString();
	clock_t startTime = clock();
	answer = obj->getNumber(p0, p1);
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
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;
	
	string p0;
	string p1;
	int p2;
	
	// ----- test 0 -----
	disabled = false;
	p0 = "ABC";
	p1 = "CBA";
	p2 = 2;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = "A";
	p1 = "B";
	p2 = -1;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = "AAABBB";
	p1 = "BBBAAA";
	p2 = 3;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	p1 = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	p2 = 25;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = "A";
	p1 = "A";
	p2 = 0;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 5 -----
	disabled = false;
	p0 = "DCABA";
	p1 = "DACBA";
	p2 = 2;
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	if (all_right) {
		if (tests_disabled) {
			cout << "You're a stud (but some test cases were disabled)!" << endl;
		} else {
			cout << "You're a stud (at least on given cases)!" << endl;
		}
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// 
// Little Elephant from the Zoo of Lviv likes strings.
// 
// 
// 
// 
// You are given a string A and a string B of the same length. In one turn Little Elephant can choose any character of A and move it to the beginning of the string (i.e., before the first character of A). Return the minimal number of turns needed to transform A into B. If it's impossible, return -1 instead.
// 
// 
// DEFINITION
// Class:LittleElephantAndString
// Method:getNumber
// Parameters:string, string
// Returns:int
// Method signature:int getNumber(string A, string B)
// 
// 
// CONSTRAINTS
// -A will contain between 1 and 50 characters, inclusive.
// -B will contain between 1 and 50 characters, inclusive.
// -A and B will be of the same length.
// -A and B will consist of uppercase letters ('A'-'Z') only.
// 
// 
// EXAMPLES
// 
// 0)
// "ABC"
// "CBA"
// 
// Returns: 2
// 
// The optimal solution is to make two turns. On the first turn, choose character 'B' and obtain string "BAC". On the second turn, choose character 'C' and obtain "CBA".
// 
// 1)
// "A"
// "B"
// 
// Returns: -1
// 
// In this case, it's impossible to transform A into B.
// 
// 2)
// "AAABBB"
// "BBBAAA"
// 
// Returns: 3
// 
// 
// 
// 3)
// "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// "ZYXWVUTSRQPONMLKJIHGFEDCBA"
// 
// Returns: 25
// 
// 
// 
// 4)
// "A"
// "A"
// 
// Returns: 0
// 
// 
// 
// 5)
// "DCABA"
// "DACBA"
// 
// Returns: 2
// 
// 
// 
// END KAWIGIEDIT TESTING
