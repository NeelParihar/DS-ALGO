// 18. Given an array of size n and a number k, fin all elements that appear more than n/k times.
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//code
	int n,k;
	cin>>n>>k;
	int arr[n];
    unordered_map<int ,int> map;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
        map[arr[i]]++;
	}
    for (auto x : map)
    {
        if(x.second>n/k)
        {
            cout<<x.first<<" ";
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     if(map[arr[i]]>n/k)
    //     {
    //         cout<<map[arr[i]].first<<" ";
    //     }
    // }

	
	
	return 0;
}