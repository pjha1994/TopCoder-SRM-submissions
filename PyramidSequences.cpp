#include <bits/stdc++.h>
using namespace std;

class PyramidSequences
{
public:
	long long distinctPairs(int N, int M);
};

long long PyramidSequences::distinctPairs (int N, int M) 
{
	long long ret;
	
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
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, long long p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	PyramidSequences *obj;
	long long answer;
	obj = new PyramidSequences();
	clock_t startTime = clock();
	answer = obj->distinctPairs(p0, p1);
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
	
	int p0;
	int p1;
	long long p2;
	
	// ----- test 0 -----
	disabled = false;
	p0 = 3;
	p1 = 4;
	p2 = 6ll;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = 3;
	p1 = 5;
	p2 = 5ll;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = 43;
	p1 = 76;
	p2 = 895ll;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = 2;
	p1 = 1000000000;
	p2 = 1000000000ll;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = 100000;
	p1 = 95555;
	p2 = 4777750000ll;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
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
// A pyramid sequence of height X > 1 is an infinite sequence of positive integers with period 2X-2. Its first 2X-2 terms are 1, 2, ..., X-1, X, X-1, ..., 2.
// 
// You are given ints N and M. Consider two pyramid sequences A and B, A of height N and B of height M. Return the number of distinct pairs of integers (x,y) such that for some i > 0 we have x=A[i] and y=B[i].
// 
// DEFINITION
// Class:PyramidSequences
// Method:distinctPairs
// Parameters:int, int
// Returns:long long
// Method signature:long long distinctPairs(int N, int M)
// 
// 
// CONSTRAINTS
// -N will be between 2 and 1,000,000,000, inclusive.
// -M will be between 2 and 1,000,000,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 3
// 4
// 
// Returns: 6
// 
// These are the first several terms of pyramid sequences of height 3 and 4:
// 
// {1, 2, 3, 2, 1, 2, 3, 2, 1, 2, 3, 2, 1}
// 
// {1, 2, 3, 4, 3, 2, 1, 2, 3, 4, 3, 2, 1}
// 
// We can see the following pairs: (1, 1), (2, 2), (3, 3), (2, 4), (1, 3), (3, 1). No other pairs will appear later in the sequences.
// 
// 1)
// 3
// 5
// 
// Returns: 5
// 
// The sequences begin with:
// 
// {1, 2, 3, 2, 1, 2, 3, 2, 1}
// 
// {1, 2, 3, 4, 5, 4, 3, 2, 1}
// 
// 
// 2)
// 43
// 76
// 
// Returns: 895
// 
// 
// 
// 3)
// 2
// 1000000000
// 
// Returns: 1000000000
// 
// 
// 
// 4)
// 100000
// 95555
// 
// Returns: 4777750000
// 
// 
// 
// END KAWIGIEDIT TESTING