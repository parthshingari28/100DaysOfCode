// Check if k-th bit of a given number is set or not 

#include <iostream> 
using namespace std; 

void isKthBitSet(int n, int k) 
{ 
	if (n & (1 << (k - 1))) 
		cout << "Yes"; 
	else
		cout << "No"; 
} 

int main() 
{ 
	int n, k; 
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter kth bit number: ";
    cin>>k;
	isKthBitSet(n, k); 
	return 0; 
} 
