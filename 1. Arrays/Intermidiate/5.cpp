// 5. Find duplicates in an array.
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        printDuplicates(a, n);
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


/*Complete the function below*/
void printDuplicates(int a[], int n) {
    // add code here.
    int Duplicate=1;
    
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++) 
    { 
        
        umap[a[i]]+=1;
        
    } 
    for (int i = 0; i < n; i++)  
    { 
        
        if(umap[i]>1)
        {
            cout << i << " "; 
            Duplicate=0;
        }
            
        
    } 
    
    if(Duplicate)
    {
        cout<<"-1";
    }
}