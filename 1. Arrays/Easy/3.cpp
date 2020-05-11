// Find the minimum and maximum element in an array.
#include<iostream>

using namespace std;

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