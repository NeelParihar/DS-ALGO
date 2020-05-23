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
	    int n;
	    cin>>n;
	    int arr[n+2];
	    
	    for(int i=0;i<n+2;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i = 0; i < n+2; i++)  
        {  
            if(arr[abs(arr[i])] > 0)  
                arr[abs(arr[i])] = -arr[abs(arr[i])];  
            else
                cout<< abs(arr[i]) <<" ";  
        }   
	    cout<<endl;
	}
	return 0;
}