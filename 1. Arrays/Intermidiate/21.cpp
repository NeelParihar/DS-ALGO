// #include<iostream>
// // #include <bits/stdc++.h> 
// using namespace std;
// int main()
//  {
// 	//code
// 	int t;
// 	cin>>t;
	
// 	while(t--)
// 	{
// 	    int n,k;
// 	    cin>>k>>n;
	    
// 	    if (n == 1) 
//         {  
//             cout<<0<<endl;
//             continue;
//         } 
// 	    int arr[n];
	    
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        cin>>arr[i];
    	    
// 	    }
	    
// 	    sort(arr,arr+n);
	    
// 	    int ans = arr[n-1]- arr[0];
	    
// 	    int small = arr[0]+k;
// 	    int big = arr[n-1]-k;
// 	    if (small > big) 
//             swap(small, big);
	    
// 	    for(int i=1;i<n-1;i++)
// 	    {
// 	        int subtract= arr[i]-k;
// 	        int add= arr[i]+k;
// 	        if(subtract>=small || add<= big)
// 	        {
// 	           continue; 
// 	        }
	        
// 	        if (big - subtract <= add - small) 
//                { small = subtract;} 
//             else
//               {  big = add;}
// 	    }
	    
	    
	    
	    
// 	    cout<<min(ans,big-small)<<endl;
	    
	    
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
 {
    FAST_IO
	int t;cin>>t;
	while(t--){
	    int k,n;
	    cin>>k>>n;
	    int minn=INT_MAX;
	    int maxx=INT_MIN;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	        maxx=max(maxx,a[i]);
	        minn=min(minn,a[i]);
	    }
	    
	    int mid=(minn+maxx)/2;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]<=mid){
	            a[i]=a[i]+k;
	        }
	        else{
	            a[i]=a[i]-k;
	        }
	    }
	    
	    int minn2=INT_MAX;
	    int maxx2=INT_MIN;
	    for(int i=0;i<n;i++) {
	        maxx2=max(maxx2,a[i]);
	        minn2=min(minn2,a[i]);
	    }
	    
	    cout<<min(maxx-minn,maxx2-minn2)<<endl;
	}
	return 0;
}