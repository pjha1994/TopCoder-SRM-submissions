#include <bits/stdc++.h>
using namespace std;

class RadioRange
{
public:
	double RadiusProbability(vector <int> X, vector <int> Y, vector <int> R, int Z);
};

double RadioRange::RadiusProbability (vector <int> X, vector <int> Y, vector <int> R, int Z)
{
    /*
    int n = X.size();
    pair <double, double> a[105];
    for(int i = 0; i < (int)n; ++i) {
        double x = X[i], y = Y[i], r = R[i], d= sqrt(x*x+y*y);
        a[i] = make_pair(max(0.0, d-r), -d-r);
    }
    double end = 0.0, sum = 0.0;
    sort(a, a+n);
    for(int i = 0; i < (int)n; ++i) {
        double s = a[i].first, f = -a[i].second;
        if(s >= Z)
            break;
        if(s > end)
            sum += s - end;
        end = max(end, f);
        if(end >= Z)
            break;
    }
    if(end < Z)
        sum += Z - end;
    return sum/Z;
    */
//    /*
    vector <pair <double, double> > range, lessRange;
    long long z = Z;
    int N = X.size();

    for(int i = 0; i < (int)N; ++i) {
        long long x = X[i], y = Y[i], r = R[i];
        if(x*x + y*y > r*r) {   // circle doesn't encompass (0, 0)
            double d = x*x+y*y;
            d = sqrt(d);
            double lower = d-r, upper = d+r;
            upper = min(z*1.0, upper);
            lower = min(z*1.0, lower);
            //printf("(Out: %0.2lf, %0.2lf), ", lower, upper );
            range.push_back(make_pair(lower, upper));
        }
        else {
            double upper = sqrt(x*x+y*y+0.0) + r;
            double lower = 0;
            upper = min(z*1.0, upper);
            //printf("(In: %0.2lf, %0.2lf), ", lower, upper );
            range.push_back(make_pair(lower, upper));
        }
    }
    sort(range.begin(), range.end());
    for(auto it = (range).begin(); it != (range).end(); ++it) {
        printf("(%0.2lf, %0.2lf), ", it->first, it->second);
    }
    cout << "\n\n";

     //[{-30, -56, 11, 13, -16}, {84, 44, 61, -72, -45}, {2, 10, 4, 5, 10}, 423]:0.895554775352

    for(auto it = (range).begin(); it != (range).end(); ++it) {
        if(lessRange.empty())
            lessRange.push_back(*it);
        else if(lessRange.back().second >= it->first)
            lessRange.back().second = it->second;
        else
            lessRange.push_back(*it);
    }

	double ret = 0;
    for(auto it = (lessRange).begin(); it != (lessRange).end(); ++it) {
        ret += it->second - it->first;
        printf("(%0.2lf, %0.2lf), ", it->first, it->second);
    }
    cout << "\n\n";
    ret /= z;
    ret = 1-ret;
    cout << "ret = " << ret << "\n";

	return ret;
//    */
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, vector <int> p2, int p3, bool hasAnswer, double p4) {
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
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}" << "," << p3;
	cout << "]" << endl;
	RadioRange *obj;
	double answer;
	obj = new RadioRange();
	clock_t startTime = clock();
	answer = obj->RadiusProbability(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p4 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == answer && fabs(p4 - answer) <= 1e-9 * max(1.0, fabs(p4));
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
	
	vector <int> p0;
	vector <int> p1;
	vector <int> p2;
	int p3;
	double p4;
	
	// ----- test 0 -----
	disabled = true;
	p0 = {0};
	p1 = {0};
	p2 = {5};
	p3 = 10;
	p4 = 0.5;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = true;
	p0 = {0};
	p1 = {0};
	p2 = {10};
	p3 = 10;
	p4 = 0.0;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = true;
	p0 = {10};
	p1 = {10};
	p2 = {10};
	p3 = 10;
	p4 = 0.4142135623730951;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = true;
	p0 = {11,-11,0,0};
	p1 = {0,0,11,-11};
	p2 = {10,10,10,10};
	p3 = 31;
	p4 = 0.3548387096774194;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = true;
	p0 = {100};
	p1 = {100};
	p2 = {1};
	p3 = 10;
	p4 = 1.0;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 5 -----
	disabled = true;
	p0 = {1000000000};
	p1 = {1000000000};
	p2 = {1000000000};
	p3 = 1000000000;
	p4 = 0.41421356237309503;
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 6 -----
	disabled = true;
	p0 = {20,-20,0,0};
	p1 = {0,0,20,-20};
	p2 = {50,50,50,50};
	p3 = 100;
	p4 = 0.3;
	all_right = (disabled || KawigiEdit_RunTest(6, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 7 -----
	disabled = true;
	p0 = {0,-60,-62,-60,63,-97};
	p1 = {-72,67,61,-8,-32,89};
	p2 = {6,7,8,7,5,6};
	p3 = 918;
	p4 = 0.9407071068962471;
	all_right = (disabled || KawigiEdit_RunTest(7, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 8 -----
	disabled = true;
	p0 = {10};
	p1 = {10};
	p2 = {1};
	p3 = 5;
	p4 = 1;
	all_right = (disabled || KawigiEdit_RunTest(8, p0, p1, p2, p3, true, p4) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 9 -----
	disabled = false;
	p0 = {-30,-56,11,13,-16};
	p1 = {84,44,61,-72,-45};
	p2 = {2,10,4,5,10};
	p3 = 423;
	p4 = 0.888335;
	all_right = (disabled || KawigiEdit_RunTest(9, p0, p1, p2, p3, true, p4) ) && all_right;
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
// Note that the return value is a floating-point number and that in this problem the allowed absolute or relative error has been increased to 1e-6.
// 
// This problem takes place in a plane.
// Nikola works at a radio station that is located in the point (0, 0).
// You can hear the station if and only if you are within a circle with center at (0, 0) and some unknown radius.
// 
// There are some cities near the station.
// Each city has the shape of a circle with some positive integer radius.
// Cities may partially or even completely overlap each other, and some of them may contain the radio station.
// You are given the description of all cities as vector <int>s X, Y, and R.
// For each valid i, there is a city with center at (X[i], Y[i]) and radius R[i].
// 
// The radius of our radio station is bad if there is a city that is only partially covered by the radio signal.
// Otherwise, the radius is good.
// In other words, if there is a point in a city where you can listen to our radio and another point in the same city where you cannot do so, the radius is bad.
// A radius is good if and only if each city is either covered completely by radio signal, or not covered at all.
// 
// You are given a int Z.
// The radius of our radio station is a real number chosen uniformly at random from the range [0, Z].
// Return the probability that the radius is good.
// 
// DEFINITION
// Class:RadioRange
// Method:RadiusProbability
// Parameters:vector <int>, vector <int>, vector <int>, int
// Returns:double
// Method signature:double RadiusProbability(vector <int> X, vector <int> Y, vector <int> R, int Z)
// 
// 
// NOTES
// -Your return value must have an absolute or relative error less than 1e-6.
// 
// 
// CONSTRAINTS
// -X will contain between 1 and 100 elements, inclusive.
// -X, Y, and R will each contain the same number of elements.
// -Each element of X will be between -10^9 and 10^9, inclusive.
// -Each element of Y will be between -10^9 and 10^9, inclusive.
// -Each element of R will be between 1 and 10^9, inclusive.
// -Z will be between 1 and 10^9, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {0}
// {0}
// {5}
// 10
// 
// Returns: 0.5
// 
// Our radio station is in the center of a city with radius 5, and we are choosing the radius for the station uniformly at random from [0,10].
// Radii in [0,5) are all bad, because people in the center of the city can hear our radio but people on its boundary cannot.
// Radii in [5,10] are all good, as the entire city is covered.
// Hence, the probability of having a good radius is 5/10 = 0.5.
// 
// 1)
// {0}
// {0}
// {10}
// 10
// 
// Returns: 0.0
// 
// Our radio station is in the center of a city with radius 10, and we are choosing the radius for the station uniformly at random from [0,10].
// In this case, the only good radius is 10, but the probability that it will be chosen is zero.
// 
// 2)
// {10}
// {10}
// {10}
// 10
// 
// Returns: 0.4142135623730951
// 
// The center of the city is at (10, 10) and its radius is 10.
// The good radii for our station are those where the city is not covered at all.
// These are the radii from 0 to approximately 4.14.
// 
// 3)
// {11, -11, 0, 0}
// {0, 0, 11, -11}
// {10, 10, 10, 10}
// 31
// 
// Returns: 0.3548387096774194
// 
// Here we have four cities.
// They are located to the north, south, east, and west of the station.
// A radius is good if it lies in [0,1) or in [21,31].
// 
// 4)
// {100}
// {100}
// {1}
// 10
// 
// Returns: 1.0
// 
// It is possible that some cities will not be covered even if the radius of our radio station is Z.
// 
// 5)
// {1000000000}
// {1000000000}
// {1000000000}
// 1000000000
// 
// Returns: 0.41421356237309503
// 
// 
// 
// 6)
// {20, -20, 0, 0}
// {0, 0, 20, -20}
// {50, 50, 50, 50}
// 100
// 
// Returns: 0.3
// 
// 
// 
// 7)
// {0, -60, -62, -60, 63, -97}
// {-72, 67, 61, -8, -32, 89}
// {6, 7, 8, 7, 5, 6}
// 918
// 
// Returns: 0.9407071068962471
// 
// 
// 
// END KAWIGIEDIT TESTING