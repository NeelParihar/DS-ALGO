// 10.Given an array with all distinct elements, find the largest three elements. 
// Expected time complexity is O(n) and extra space is O(1).
// Input: arr[] = {10, 4, 3, 50, 23, 90} Output: 90, 50, 23

#include<iostream>

using namespace std;


int main()
{
    int n,first,second,third;
    first=second=third=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third =second;
            second=arr[i];
        }
        else if(arr[i]>third)
        {
            third=arr[i];
        }
        
    }
    cout<<first<<" "<<second<<" "<<third;
    return(0);
}