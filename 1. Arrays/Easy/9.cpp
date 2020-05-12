// 9) Find the range of the array. Range means the difference between the maximum and minimum element in the array.

#include<iostream>

using namespace std;

int main()
{
    int n,mn=INT_MAX,mx=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        mn=min(arr[i],mn);
        mx=max(arr[i],mx);
        
    }
    cout<<mx-mn<<endl;
    return(0);
}