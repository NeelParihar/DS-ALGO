// 11.Rearrange the array in alternating positive and negative items with O(1) extra space

#include <bits/stdc++.h> 
using namespace std;
void rearrange(int arr[], int n) 
{ 
    // The following few lines are  
    // similar to partition process 
    // of QuickSort. The idea is to  
    // consider 0 as pivot and 
    // divide the array around it. 
    int i = -1; 
    for (int j = 0; j < n; j++) 
    { 
        if (arr[j] < 0) 
        { 
            i++; 
            swap(arr[i], arr[j]); 
        } 
    } 
    // Now all positive numbers are at  
    // end and negative numbers at the 
    // beginning of array. Initialize  
    // indexes for starting point of 
    // positive and negative numbers  
    // to be swapped 
    int pos = i + 1, neg = 0; 
  
    // Increment the negative index by  
    // 2 and positive index by 1, 
    // i.e., swap every alternate negative  
    // number with next positive number 
    while (pos < n && neg < pos &&  
                     arr[neg] < 0) 
    { 
        swap(arr[neg],arr[pos]); 
        pos++; 
        neg += 2; 
    } 
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    rearrange(arr,n);
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
// Another solution using Queue
// #include <bits/stdc++.h> 
// using namespace std;
// int main()
//  {
// 	//code
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int ar[n];
// 	    int i;queue<int>q;
// 	    queue<int>q1;
// 	    for(i=0;i<n;i++)
// 	    {cin>>ar[i];
// 	    if(ar[i]>=0)
// 	    q.push(ar[i]);
// 	    else q1.push(ar[i]);
// 	    }
// 	    while(!q.empty() || !q1.empty() )
// 	    {
// 	        if(!q.empty())
// 	        {
// 	        int x=q.front();
// 	        q.pop();
// 	        cout<<x<<" ";
	            
// 	        }
// 	       if(!q1.empty())
// 	       {
// 	        int y=q1.front();
// 	        q1.pop();
// 	        cout<<y<<" ";
	           
// 	       }
	        
// 	    }cout<<endl;
// 	}
// 	return 0;
// }
