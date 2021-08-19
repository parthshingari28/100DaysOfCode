// Trailing zeroes in a factorial of a number -> count of zeros at end of factorial value of number

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

int main(){
    int number = 10;
    cout<<countZero(number);
    return 0;
}