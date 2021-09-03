// Search operation on an Unsorted array -> linear search

#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == x)
			return i;
	}

	return -1;
} 

int main() {
	int arr[] = {20, 5, 7, 25}, x = 7;
    cout<<search(arr, 4, x);
}

// Time complexcity : O(n)
// Time complexcity can be reduced to O(log n) if array is sorted one using binary search