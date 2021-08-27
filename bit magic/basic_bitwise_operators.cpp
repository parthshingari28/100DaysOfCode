// Basic bitwise operators
// AND (&) operator
// OR (|) operator
// XOR (^) operator

#include <iostream>
using namespace std;

int main() {
	int x = 3, y = 6;
    // & : Bitwise And operator -> 1 & 1 gives 1, 1 & 0 gives 0 and 0 & 0 gives 0
	cout<<(x & y)<<endl;
	// | : Bitwise Or operator -> 1 or anything gives 1, 0 or 0 gives 0
	cout<<(x | y)<<endl;
	// ^ : Bitwise XOR operator -> same then 0, if different then 1
	cout<<(x ^ y)<<endl;
	return 0;
}