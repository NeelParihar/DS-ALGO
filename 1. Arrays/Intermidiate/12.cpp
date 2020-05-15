// 12. Find if there is anysubarray with sumequal to zer0

#include <bits/stdc++.h> 
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
	    unordered_set<int> sumSet; 
  
        // Traverse through array and store prefix sums 
        int sum = 0; 
        for (int i = 0 ; i < n ; i++) 
        { 
            sum += arr[i]; 
      
            // If prefix sum is 0 or it is already present 
            if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
            {
                cout<<"Yes";
                found=0;
                break;
            }
            sumSet.insert(sum); 
        } 
	   
	    if(found)
	    {
	        cout<<"No";
	    }
	    cout<<endl;
	}
	
	return 0;
}