// 4. Find all pairs on integer array whose sum is equal to given number.

#include<iostream>

using namespace std;

int main()
{
    int n,inpno;
    cin>>n>>inpno;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==inpno)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
        
    }
    return(0);
}