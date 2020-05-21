#include<iostream>
#include<vector>

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
	    vector<int> arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
        vector<vector<int> > profit(3,vector<int> (n));
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                profit[i][j]=0;
            }
        }


        for(int t=1;t<3;t++)
        {
            int maxsofar=INT_MIN;

            for(int d=1;d<n;d++)
            {
                maxsofar = max(maxsofar,profit[t-1][d-1]-arr[d-1]);
                cout<<maxsofar<<" ";
                cout<<endl;
                profit[t][d]= max(profit[t][d-1],maxsofar + arr[d]);
                
            }
        }
        cout<<profit[2][n-1]<<" ";
	    // int max_prize=arr[n-1];
	    
	    // for(int i=n-2;i>=0;i--)
	    // {
	    //     max_prize=max(arr[i],max_prize);
	        
	    //     profit[i]= max(profit[i+1],max_prize-arr[i]);
	    // }
        // cout<<endl;
        // for(int i=0;i<n;i++)
	    // {
	    //     cout<<profit[i]<<" ";
	    // }
        // cout<<endl;
        // int min_price = arr[0]; 
        // for (int i=1; i<n; i++) 
        // { 
        //     // min_price is minimum price in price[0..i] 
        //     if (arr[i] < min_price) 
        //         min_price = arr[i]; 
    
        //     // Maximum profit is maximum of: 
        //     // a) previous maximum, i.e., profit[i-1] 
        //     // b) (Buy, Sell) at (min_price, price[i]) and add 
        //     //    profit of other trans. stored in profit[i] 
        //     profit[i] = max(profit[i-1], profit[i] + (arr[i]-min_price) ); 
        // } 
        // for(int i=0;i<n;i++)
	    // {
	    //     cout<<profit[i]<<" ";
	    // }
	    // cout<<profit[n-1];
	}
	return 0;
}