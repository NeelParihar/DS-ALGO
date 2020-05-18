// 16. Find longest consecutive subsequence.

#include <bits/stdc++.h> 
using namespace std;
void solve(long arr[],long n)
{
    
    int longest=1;
    unordered_set<long> map;
    for(int i=0;i<n;i++) map.insert(arr[i]);
    
    for(int i=0;i<n;i++)
    {
        if(map.find(arr[i]-1) == map.end())
        {
            int j=arr[i];
            
            while(map.find(j)!=map.end())
            {
                j++;
            }
            
            longest= max((long)longest,j-arr[i]);
        }
            
            
    }
    cout<<longest<<endl;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	    long arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    solve(arr,n);
	}
	return 0;
}