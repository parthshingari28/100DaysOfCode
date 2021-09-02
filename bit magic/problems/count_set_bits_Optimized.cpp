// Lookup Table -> Optimised approach to count set bits in an integer

#include <bits/stdc++.h> 
using namespace std; 

    int table[256];
	// recursive function to count set bits 
	void initialize() { 
      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	// mask used `0xff` is `11111111` in binary
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}

int main() 
{ 
	initialize();
	int n = 9; 
	cout << countSetBits(n); 
	return 0; 
} 

// Time complexcity : O(1)
