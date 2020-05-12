// Given an number n. Find the number of occurrences of f in the array.
#include<iostream>
using namespace std;

int main()
{
    int n,f,count=0;
    cin>>n>>f;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(f==arr[i])
            count++;
    }
    cout<<"number of occurrences "<<count<<endl;
    return(0);
}