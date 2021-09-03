// Deletion in arrays

#include<bits/stdc++.h>
using namespace std;
 
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
// Check if x is an last element in array
if (arr[n - 1] == x)
{
    return n-1;
}

// Search x in array
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
// If x found in array
if (i < n)
{
    // reduce size of array and move all
    // elements on space ahead
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
return n;
}

int main() {
	
       int arr[] = {3, 8, 12, 5, 6}, x = 6, n = 5;
       cout<<"Before Deletion"<<endl;
       for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }
       cout<<endl;
       n = deleteElement(arr, n, x);
       cout<<"After Deletion"<<endl;
       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}

// Time complexcity : O(n)
// Best case : Deletion at the end -> O(1)
// Deletion at the beginning -> 0(n)