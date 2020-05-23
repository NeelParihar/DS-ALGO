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
	    int arr[m][n];
	    
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	        
	    }
	    int row = 0;
        int i = 0, j = n - 1;
        while(i < m && j >= 0){
            if(arr[i][j] == 1){
                row = i;
                j--;
            }
            else i++;
        }
	    
        
	    cout<<row<<endl;
	}
	return 0;
}