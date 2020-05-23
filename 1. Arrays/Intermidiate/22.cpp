#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n) 
{ 
      
    // The number of jumps needed to reach the starting index is 0 
    if (n <= 1) 
        return 0; 
  
    // Return -1 if not possible to jump 
    if (arr[0] == 0) 
        return -1; 
  
    // initialization 
    int maxReach = arr[0];  // stores all time the maximal reachable index in the array. 
    int step = arr[0];      // stores the number of steps we can still take 
    int jump =1;//stores the number of jumps necessary to reach that maximal reachable position. 
  
    // Start traversing array 
    int i=1; 
    for (i = 1; i < n; i++) 
    { 
        // Check if we have reached the end of the array 
        if (i == n-1) 
            return jump; 
  
        // updating maxReach 
        maxReach = max(maxReach, i+arr[i]); 
  
        // we use a step to get to the current index 
        step--; 
  
        // If no further steps left 
        if (step == 0) 
        { 
            // we must have used a jump 
            jump++; 
  
            // Check if the current index/position or lesser index 
            // is the maximum reach point from the previous indexes 
            if(i >= maxReach) 
                return -1; 
  
            // re-initialize the steps to the amount 
            // of steps to reach maxReach from position i. 
            step = maxReach - i; 
        } 
    } 
  
    return -1; 
} 
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n<=0)
	    {
	        cout<<0<<endl;
	        break;
	    }
	    
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    cout<<minJumps(a,n)<<endl;
	   // if(a[0]==0)
	   // {
	   //     cout<<-1<<endl;
	   //     break;
	   // }
	    
	    
	   // int steps=a[0],jumps=1;
	   // int maxrange=a[0];
	    
	   // for(int i=1;i<n;i++)
	   // {
	   //     if(maxrange==n-1)
	   //     {
	   //         cout<<jumps<<endl;
	   //         break;
	   //     }
	   //     maxrange = max(maxrange,i+a[i]);
	        
	   //     steps--;
	        
	   //     if (steps == 0) 
	   //     {
	            
    //             jumps++;
                
    //             if(i>=maxrange)
    //             {
    //               cout<<-1<<endl;
    //               break;
    //             }
    //             steps = maxrange - i;
    //         }
	        
	   // }
	    
	    
	    
	}
	return 0;
}