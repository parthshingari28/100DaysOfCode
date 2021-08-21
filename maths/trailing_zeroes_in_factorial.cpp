// Trailing zeroes in a factorial of a number -> count of zeros at end of factorial value of number
// Naive Approach
#include<iostream>
#include<limits.h>
using namespace std;

int countZero(int n)
{
    int fact = 1;
    for(int i=2; i<=n; i++)
        fact = i * fact;
    int res = 0;
    while(fact%10 == 0){
        res++;
        fact = fact/10;
    }
    return res;
}

// Time Complexicity = 0(n)
// Major issue with the solution is it going to cause overflow for even slightly higher values of n and it would be difficult for int to hold these values.

// Efficient Approach
int countTrailingZeroes(int n)
{
    int res = 0;
    for(int i = 5; i <= n; i = i*5)
        res = res + n/i;
    return res;
}

// Time complexicity : 0(log n)
// It also solves the major issue of overflow too, as we are not computing value of factorial in this approach.

int main(){
    int number = 351;
   // cout<<countZero(number);
    cout<<countTrailingZeroes(number);
    return 0;
}