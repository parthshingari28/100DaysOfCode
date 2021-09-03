// Insertion in arrays

#include<iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos){
    if(n == cap)
        return n;

    for(int i = n -1; i >= pos-1; i--){
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = x;

    return n + 1;
}

int main(){
    int arr[5], cap = 5,  n = 3;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }
       cout<<endl;
       int x = 7, pos = 2;
       n = insert(arr, n, x, cap, pos);
       cout<<"After Insertion"<<endl;
       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}

// Time complexcity : O(n)
// Best case : Insert at the end -> O(1)
// Insert at the beginning -> 0(n)