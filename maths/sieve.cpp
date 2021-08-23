// Sieve of Eratosthenes : to print prime divisors of a number
#include <iostream>
#include <limits.h>
using namespace std;

// Naive Approach
void printPrimes(int n)
{
    for(int i=2; i <=n; i++){
        //if(isPrime(i)) -> check for prime number
            cout<<i<<" ";
    }
}
// Time Complexicity : O(n * n^(1/2))

// Efficient Approach using sieve of eratosthenes
void printSieve(int n)
{
	if(n <= 1)
		return;
	bool isPrime[n+1];
	fill(isPrime, isPrime + n + 1, true);
	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}
	for(int i = 2; i<=n; i++)
	{
		if(isPrime[i])
			cout<<i<<" ";
	}
}
// Time Complexicity : O(n * log log(n))

// Optimsed efficient approach
void sieve(int n)
{
	if(n <= 1)
		return;
	bool isPrime[n+1];
	fill(isPrime, isPrime + n + 1, true);
	for(int i=2; i <= n; i++)
	{
		if(isPrime[i])
		{
            cout<<i<<" ";
			for(int j = i*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}
}
// Time Complexicity : O(n * log log(n))

int main() {
    	int n = 18;
		//printSieve(n);
        sieve(n);
        return 0;
}