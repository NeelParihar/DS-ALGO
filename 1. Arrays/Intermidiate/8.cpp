// 8. Find the first repeating element in an array of integers.
#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,found=1;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                cout<<i+1;
	                found=0;
	                break;
	            }
	        }
	        if(!found) break;
	    }
	    if(found)
	    {
	        cout<<"-1";
	    }
	    cout<<endl;
	}
	return 0;
}