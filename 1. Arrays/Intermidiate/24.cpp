#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    
	    int low=0;
	    int high=n-1,flag=0;
	    
	    for(int i = 0; i < n; i++)  
        {  
            low=i+1;
            high= n-1;
            while (low < high) { 
             if(arr[i]+arr[high]+arr[low]>x)
                {
                    high--;
                }
                else if(arr[i]+arr[high]+arr[low]==x)
                {
                    flag=1;
                    cout<<1<<endl;
                    break;
                }
                else if(arr[i]+arr[high]+arr[low]<x)
                {
                    low++;
                }
            }
            if(flag)
            {
                break;
            }
            
        }   
        if(!flag)
            {
               cout<<0<<endl;
            }
	    
	}
	return 0;
}