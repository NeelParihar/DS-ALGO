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
	    int n,m;
	    cin>>n>>m;
	    int arr[n][m];
	    
	    for(int i=0;i<n;i++)
	    {
	       for(int j=0;j<m;j++)
    	    {
    	        cin>>arr[i][j];
    	    }
	    }
	    
	    
	    int i,left=0,up=0,right=m-1,down=n-1;
	    
	    while(left <= right && up <= down )
	    {
	        //Print the first row from the remaining rows.
	        for(i=left;i<=right;i++)
	        {
	            cout<<arr[up][i]<<" ";
	        }
	        up++;
	        //Print the last column from the remaining columns.
	        for(i=up;i<=down;i++)
	        {
	            cout<<arr[i][right]<<" ";
	        }
	        right--;
	        
	        if(up <= down){
	        //Print the last row from the remaining rows.
    	        for(i=right;i>=left;i--)
    	        {
    	            cout<<arr[down][i]<<" ";
    	        }
	        down--;
	        }
	        
	        if(left <= right){
	        //Print the first column from the remaining columns.
    	        for(i=down;i>=up;i--)
    	        {
    	            cout<<arr[i][left]<<" ";
    	        }
	        left++;
	        }
	        
	    }
	    cout<<endl;
	      
	    
	}
	return 0;
}