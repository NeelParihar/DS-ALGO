// 29. Find whether an array is a subset of another array.
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
	    long n,m;
	    cin>>m>>n;
	    long arr1[m],arr2[n];
	    unordered_map<int, int> umap; 
	    for(long i=0;i<m;i++)
	    {
	        cin>>arr1[i];
	        
	        umap[arr1[i]]=1;
	        
	    }
	    for(long i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	    }
	    int flag=0;
	    for( long i = 0; i < n; i++)  
        {  
            if(umap.find(arr2[i]) != umap.end())
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }   
        
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
	    
	}
	return 0;
}