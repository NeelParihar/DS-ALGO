#include<iostream>

using namespace std;

// Check whether n is present in an array of size m or not. 
// Input - n,m (Input number, size of array)
// - Take input n elements for the array
// Output -> true/false

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m],isPresent=0;
    for(int i=0;i<m;i++) cin>>arr[i];
    
    for(int i=0;i<m;i++)
    {
        if(arr[i]==n)
        {
            cout<<"TRUE";
            isPresent=1;
            break;
        }
        else
        {
            /* code */
            isPresent=0;
        }

        
    }
    if(!isPresent)
    {
        cout<<"FALSE";
    }
    
    return(0);
}