#include<iostream>
#include<limits.h>
using namespace std;

int factorial(int n){
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int number = 14;
    cout<<factorial(number);
    return 0;
}

// Assumption : n>=0
// Time Complexicity = 0(n)
// Auxiliary space required is 0(n) 