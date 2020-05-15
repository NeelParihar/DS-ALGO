// 10) Move all the negative elements to one side of the array.
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    int i = -1; 
    for (int j = 0; j < n; j++) 
    { 
        if (arr[j] < 0) 
        { 
            i++; 
            swap(arr[i],arr[j]); 
        } 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return(0);
}