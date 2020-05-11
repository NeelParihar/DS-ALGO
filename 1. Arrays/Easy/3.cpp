// Find the minimum and maximum element in an array.
#include<iostream>

using namespace std;

// Create an Array of size 10 of integers. Take input from the user for these
// 10 elements and print the entire array after that.

int main()
{
    int arr[10],mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
        
    }
    cout<<mn<<" "<<mx;
    return 0;
}