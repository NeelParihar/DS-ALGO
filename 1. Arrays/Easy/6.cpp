// Find the Kth largest and Kth smallest number in an array.
#include<iostream>
using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Kth smallest "<<arr[k-1]<<endl;
    cout<<"Kth largest"<<endl;
    for(int i=k;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return(0);
}