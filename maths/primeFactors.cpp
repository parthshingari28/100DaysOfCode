// Prime factors : divisors of a number which are prime number and on multiplying all these prime factors we get the number (n)

#include<iostream>
#include<limits.h>
using namespace std;

// Naive Approach : we check till (n) iterations and Time Complexicity becomes O(n^2 log(n))
// Efficient Approach
// Idea : Divisors always appear in pairs, therefore number of iterations reduces to n^(1/2) from n
void primeFactors(int n)
{
	if(n <= 1)
		return;
	for(int i=2; i*i<=n; i++)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";
			n = n / i;
		}
	}

	if(n > 1)
		cout<<n<<" ";
	cout<<endl;
}

// More efficient approach
void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	while(n % 2 == 0)
	{
		cout<<2<<" ";
		n = n / 2;
	}

	while(n % 3 == 0)
	{
		cout<<3<<" ";
		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";
			n = n / i;
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";
			n = n / (i + 2);
		}
	}

	if(n > 3)
		cout<<n<<" ";
	cout<<endl;
}
// Time Complexicity : O(n^(1/2))

int main() {
    	int n = 2829;
        //primeFactors(n);
    	printPrimeFactors(n);
    	return 0;
}