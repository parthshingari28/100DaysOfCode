#include<iostream>
#include<limits.h>
using namespace std;

int factorial(int n)
{
    int res = 1;
    for(int i=2; i <= n; i++){
        res = res * i;
    }
    return res;
}

int main()
{
    int number = 14;
    cout<<factorial(number);
    return 0;
}

// Time Complexicity = 0(n)
// Auxiliary space required is 0(1) i.e constant 