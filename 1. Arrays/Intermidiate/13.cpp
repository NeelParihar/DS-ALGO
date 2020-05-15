// 13. Find Largest sum contiguous Subarray.[Very Important] {Kadanes algo}
#include<iostream>
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int curr_max=arr[0],max_so_far=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        curr_max = max(arr[i], curr_max+arr[i]); 
            max_so_far = max(max_so_far, curr_max); 
	    }
	    cout<<max_so_far<<endl;
	}
	return 0;
}