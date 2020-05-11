// Write a program to reverse the array. [Hint: use indexes]
// Eg , 5 is the size of array and then elements of arrays are input

#include<iostream>

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
    for(int i=0,j=n-1;i!=n/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return(0);
}