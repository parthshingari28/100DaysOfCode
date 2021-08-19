/* 
Palidrome number are those numbers whose reverse is same as the actual number.
like num = 363 rev = 363 so, num is a palidrome number.

Idea : traverse from right to left to find reverse of a number.
x%10 -> last digit
x=x/10 -> remaining digits
*/

#include<iostream>
#include<limits.h>
using namespace std;

bool isPalidrome(int num){
    int rev = 0;
    int temp = num;
    while(temp != 0){
        int ld = temp % 10;
        rev = rev*10 + ld;
        temp = temp/10;
    }
    return (rev == num);
}

int main(){
    int number = 363;
    cout<<isPalidrome(number);
    return 0;
}

// Time Complexicity = 0(d) , where d is no. of digits