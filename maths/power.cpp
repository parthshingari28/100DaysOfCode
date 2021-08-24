#include<iostream>
#include<limits.h>
using namespace std;

// Naive Approach
int pow(int x, int n)
{
    int res =1;
    for(int i=0; i<n; i++)
        res = res*x;
    return res;
}
// Time Complexicity : 0(n)

// Efficient Approach : Recursive solution
int power(int x, int n)
{
	if(n == 0)
		return 1;
	int temp = power(x, n/2);
	temp = temp * temp;
	if(n % 2 == 0)
		return temp;
	else
		return temp * x; 
}
// Time Complexicity : 0(logn)
// Auxiliary space : 0(logn) 

// Optimised Approach : Iterative solution (Binary Exponentiation)
int iterative_power(int x, int n)
{
	int res = 1;
	while(n > 0){
		// if(n & 1) -> more optimised
		if(n % 2 != 0)
			res = res * x;
		x = x * x;
		// n = n >> 1; -> more optimised 
		n = n/2;
	}
	return res;
}
// Time Complexicity : 0(logn)
// Auxiliary space : 0(1) 

int main() {
    int x = 3, n = 5;
    //cout<<pow(x, n);
	//cout<<power(x, n);
	cout<<iterative_power(x, n);
    return 0;
}