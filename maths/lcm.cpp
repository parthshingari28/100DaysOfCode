// LCM of two numbers

#include <iostream>
#include <limits.h>
using namespace std;

// Naive Approach
int lcm_naive(int a, int b)
{
	int res = max(a, b);
	while(true){
		if(res%a == 0 && res%b == 0)
			return res;
		res++;
	}
	return res;
}
// Time complexicity : 0(a * b - max(a,b))

// Efficient Approach
// a * b = gcd(a, b) * lcm(a, b)
int gcd(int a, int b)
{
	if(b==0)
		return a;
	return gcd(b, a % b);
}
// Time Complexicity : O(log(min(a, b)))

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main() {
    	int a = 4, b = 6;
        //cout<<lcm_naive(a, b);
    	cout<<lcm(a, b);
    	return 0;
}