#include<iostream>
#include<limits.h>
using namespace std;

// Naive Approach
bool checkPrime(int n)
{
    if(n == 1)
        return true;
    for(int i=2; i < n; i++)
        if(n % i == 0)
            return false;
    return true;
}
// Time Complexicity : O(n)

// Efficient Approach
// Idea : Divisors always appear in pairs
bool check_prime(int n)
{
    if(n == 1)
        return false;
    for(int i=2; i*i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}
// Time Complexicity : O(n^(1/2))

// More efficient approach
bool isPrime(int n)
{
    if(n == 1)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(int i=5; i*i <= n; i = i+6)
        if(n % i == 0 || n % (i+2) == 0)
            return false;
    return true;
}
// Time complexicity : approx 3 times faster than efficient approach

int main(){
    int number = 10317;
   // cout<<checkPrime(number);
   // cout<<check_prime(number);
    cout<<isPrime(number);
    return 0;
}