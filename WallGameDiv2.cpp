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
#define	cl(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

#if (0)
	#define debug 
#else 
	#define debug(x)	cout << #x << " = " << x << "\n"
#endif

class WallGameDiv2
{
public:
	int play(vector <string> costs);
};

int WallGameDiv2::play (vector <string> costs) 
{
	int ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	WallGameDiv2 *obj;
	int answer;
	obj = new WallGameDiv2();
	clock_t startTime = clock();
	answer = obj->play(p0);
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
	
	vector <string> p0;
	int p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"042","391"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 13;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"0xxxx","1x111","1x1x1","11191","xxxx1"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 16;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"0","5"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"0698023477896606x2235481563x59345762591987823x663","1x88x8338355814562x2096x7x68546x18x54xx1077xx5131","64343565721335639575x18059738478x156x781476124780","2139850139989209547489708x3466104x5x3979260330074","15316x57171x182167994729710304x24339370252x2x8846","459x479948xx26916349194540891252317x99x4329x34x91","96x3631804253899x69460666282614302698504342364742","4x41693527443x7987953128673046855x793298x8747219x","7735427289436x56129435153x83x37703808694432026643","340x973216747311x970578x9324423865921864682853036","x1442314831447x860181542569525471281x762734425650","x756258910x0529918564126476x481206117984425792x97","467692076x43x91258xx3xx079x34x29xx916574022682343","9307x08x451x2882604411x67995x333x045x0x5xx4644590","4x9x088309856x342242x12x79x2935566358156323631235","04596921625156134477422x2691011895x8564609x837773","223x353086929x27222x48467846970564701987061975216","x4x5887805x89746997xx1419x758406034689902x6152567","20573059x699979871151x444449x5170122650576586x898","683344308229"
			"681464514453186x51040742xx138x5170x93","1219892x9407xx63107x24x4914598xx4x478x31485x69139","856756530006196x8722179365838x9037411399x41126560","73012x9290145x1764125785844477355xx827269976x4x56","37x95684445661771730x80xx2x459547x780556228951360","54532923632041379753304212490929413x377x204659874","30801x8716360708478705081091961915925276739027360","5x74x4x39091353819x10x433010250089676063173896656","03x07174x648272618831383631629x020633861270224x38","855475149124358107x635160129488205151x45274x18854","091902044504xx868401923845074542x50x143161647934x","71215871802698346x390x2570413992678429588x5866973","87x4538137828472265480468315701832x24590429832627","9479550007750x658x618193862x80317248236583631x846","49802902x511965239855908151316389x972x253946284x6","053078091010241324x8166428x1x93x83809001454563464","2176345x693826342x093950x12x7290x1186505760xx978x","x9244898104910492948x2500050208763770568x92514431","6855xx7x145213846746325656963x0419064369747824511","88x15690xxx31x20312255171"
			"137133511507008114887695","x391503034x01776xx30264908792724712819642x291x750","17x1921464904885298x58x58xx174x7x673958x9615x9230","x9217049564455797269x484428813681307xx85205112873","19360179004x70496337008802296x7758386170452xx359x","5057547822326798x0x0569420173277288269x486x582463","2287970x0x474635353111x85933x33443884726179587xx9","0x697597684843071327073893661811597376x4767247755","668920978869307x17435748153x4233659379063530x646x","0019868300350499779516950730410231x9x18749463x537","00508xx083203827x42144x147181308668x3192478607467"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3512;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// Rabbit and Eel are playing a board game.
// The game is played with a single token on a rectangular board that is divided into a grid of unit cells.
// Some cells contain a digit that represents the cost of placing the token onto that cell.
// Other cells contain the letter 'x' that represents a blocked cell.
// It is not allowed to place the token onto a blocked cell.
// 
// 
// Initially, the token is placed on the leftmost cell of the topmost row.
// (The constraints guarantee that this cell will never be blocked and its cost will always be 0.)
// Eel starts the game by putting up some walls.
// Eel may place as many walls as he wants, including none.
// Each wall must be placed between two adjacent cells in the same column.
// 
// 
// Once Eel has placed the walls, Rabbit gets to move the token.
// In each step, Rabbit may move the token one cell left, one cell right, or one cell down.
// (Note that Rabbit is not allowed to move the token upwards.)
// Rabbit may only move the token into cells that are not blocked.
// Each time Rabbit moves the token into a cell, he has to pay the cost associated with that cell.
// 
// 
// The game ends when Rabbit first moves the token into the bottommost row.
// The constraints guarantee that this can be achieved if Eel does not place any walls.
// The game must always be allowed to end.
// That is, Eel must not place a set of walls that blocks all possible paths to the bottommost row.
// 
// 
// Rabbit's goal is to minimize and Eel's goal is to maximize the total cost paid by Rabbit during the game.
// You are given the vector <string> costs representing the costs of cells:
// character j of element i of cost is either a digit that represents the cost written in the cell in row i, column j; or it is the letter 'x' that represents a blocked cell.
// Return the total cost of the game assuming that both Rabbit and Eel play optimally.
// 
// 
// DEFINITION
// Class:WallGameDiv2
// Method:play
// Parameters:vector <string>
// Returns:int
// Method signature:int play(vector <string> costs)
// 
// 
// CONSTRAINTS
// -costs will contain between 2 and 50 elements, inclusive.
// -Each element of costs will contain between 1 and 50 characters, inclusive.
// -Each element of costs will contain the same number of characters.
// -Each character of each element of costs will be a letter 'x' or a decimal digit ('0'-'9').
// -There will be at least one valid path from the leftmost cell of topmost row to a cell in the bottommost row.
// -costs[0][0] will always be '0'.
// 
// 
// EXAMPLES
// 
// 0)
// {"042"
// ,"391"}
// 
// Returns: 13
// 
// Eel's optimal stategy is to put two walls: between '0'-'3' and between '2'-'1'. Then Rabbit's optimal strategy is to move the token along the path '0'->'4'->'9'. The total cost will be 13.
// 
// 1)
// {"0xxxx"
// ,"1x111"
// ,"1x1x1"
// ,"11191"
// ,"xxxx1"}
// 
// Returns: 16
// 
// There's only one path from the starting cell to the bottom row and Eel isn't allowed to block it. Rabbit will move the token along this path and will get to pay a cost of 16. Note that it is not allowed to move the token upwards.
// 
// 
// 2)
// {"0"
// ,"5"}
// 
// Returns: 5
// 
// 
// 
// 3)
// {"0698023477896606x2235481563x59345762591987823x663"
// ,"1x88x8338355814562x2096x7x68546x18x54xx1077xx5131"
// ,"64343565721335639575x18059738478x156x781476124780"
// ,"2139850139989209547489708x3466104x5x3979260330074"
// ,"15316x57171x182167994729710304x24339370252x2x8846"
// ,"459x479948xx26916349194540891252317x99x4329x34x91"
// ,"96x3631804253899x69460666282614302698504342364742"
// ,"4x41693527443x7987953128673046855x793298x8747219x"
// ,"7735427289436x56129435153x83x37703808694432026643"
// ,"340x973216747311x970578x9324423865921864682853036"
// ,"x1442314831447x860181542569525471281x762734425650"
// ,"x756258910x0529918564126476x481206117984425792x97"
// ,"467692076x43x91258xx3xx079x34x29xx916574022682343"
// ,"9307x08x451x2882604411x67995x333x045x0x5xx4644590"
// ,"4x9x088309856x342242x12x79x2935566358156323631235"
// ,"04596921625156134477422x2691011895x8564609x837773"
// ,"223x353086929x27222x48467846970564701987061975216"
// ,"x4x5887805x89746997xx1419x758406034689902x6152567"
// ,"20573059x699979871151x444449x5170122650576586x898"
// ,"683344308229681464514453186x51040742xx138x5170x93"
// ,"1219892x9407xx63107x24x4914598xx4x478x31485x69139"
// ,"856756530006196x8722179365838x9037411399x41126560"
// ,"73012x9290145x1764125785844477355xx827269976x4x56"
// ,"37x95684445661771730x80xx2x459547x780556228951360"
// ,"54532923632041379753304212490929413x377x204659874"
// ,"30801x8716360708478705081091961915925276739027360"
// ,"5x74x4x39091353819x10x433010250089676063173896656"
// ,"03x07174x648272618831383631629x020633861270224x38"
// ,"855475149124358107x635160129488205151x45274x18854"
// ,"091902044504xx868401923845074542x50x143161647934x"
// ,"71215871802698346x390x2570413992678429588x5866973"
// ,"87x4538137828472265480468315701832x24590429832627"
// ,"9479550007750x658x618193862x80317248236583631x846"
// ,"49802902x511965239855908151316389x972x253946284x6"
// ,"053078091010241324x8166428x1x93x83809001454563464"
// ,"2176345x693826342x093950x12x7290x1186505760xx978x"
// ,"x9244898104910492948x2500050208763770568x92514431"
// ,"6855xx7x145213846746325656963x0419064369747824511"
// ,"88x15690xxx31x20312255171137133511507008114887695"
// ,"x391503034x01776xx30264908792724712819642x291x750"
// ,"17x1921464904885298x58x58xx174x7x673958x9615x9230"
// ,"x9217049564455797269x484428813681307xx85205112873"
// ,"19360179004x70496337008802296x7758386170452xx359x"
// ,"5057547822326798x0x0569420173277288269x486x582463"
// ,"2287970x0x474635353111x85933x33443884726179587xx9"
// ,"0x697597684843071327073893661811597376x4767247755"
// ,"668920978869307x17435748153x4233659379063530x646x"
// ,"0019868300350499779516950730410231x9x18749463x537"
// ,"00508xx083203827x42144x147181308668x3192478607467"}
// 
// Returns: 3512
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!