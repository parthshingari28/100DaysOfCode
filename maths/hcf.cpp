// GCD(Greatest Common Divisor) or HCF of two numbers

#include <iostream>
#include <limits.h>
using namespace std;

// Naive Approach
int hcf_naive(int a, int b)
{
	int res = min(a, b);
	while(res > 0){
		if(a%res == 0 && b%res == 0)
			break;
		res--;
	}
	return res;
}
// Time complexicity : 0(min(a,b))

// Efficient Approach using Euclidean Algorithm
int hcf(int a, int b)
{
	while(a!=b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a; 
	}
	return a;
}

// Optimised Euclidean Algorithm
int hcf_optimized(int a, int b)
{
	if(b==0)
		return a;
	return hcf_optimized(b, a % b);
}
// Time Complexicity : 0(log(min(a, b)))

int main() {
    	int a = 12, b = 15;
       	//cout<<hcf_naive(a, b);
		//cout<<hcf(a, b);
    	cout<<hcf_optimized(a, b);
    	return 0;
}