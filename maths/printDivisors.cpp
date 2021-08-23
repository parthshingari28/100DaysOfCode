#include <iostream>
#include <limits.h>
using namespace std;

// Naive Approach
void divisors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
            cout<<i<<" ";
    }
}
// Time Complexicity : 0(N)
// Auxiliary Space : 0(1)

// Efficient Approach
void Divisors(int n)
{
	for(int i=1; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
			if(i != (n / i))
				cout<<(n / i)<<" ";	
		}
	}
}
// Time Complexicity : 0(N^(1/2))
// Auxiliary Space : 0(1)
// DrawBack : prints numbers in unsorted order

// More efficient approach : prints output in sorted order too
void printDivisors(int n)
{
	int i = 1;
    // prints all divisors from 1(inclusive) to N^(1/2)(exclusive)
	for(i=1; i*i < n; i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
		}
	}
    // prints all divisors from N^(1/2)(exclusive) to N(inclusive)
	for(; i >= 1; i--)
	{
		if(n % i == 0)
		{
			cout<<(n / i)<<" ";
		}
	}
}
// Time Complexicity : 0(N^(1/2))
// Auxiliary Space : 0(1)

int main() {
    	int n = 1428;
        //divisors(n);
    	//Divisors(n);
    	printDivisors(n);
    	return 0;
}