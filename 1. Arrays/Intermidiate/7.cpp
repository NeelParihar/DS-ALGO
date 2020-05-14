// 7. Find common elements in three sorted arrays
#include<iostream>

using namespace std;

int main() {
	//code
	int t;
    cin >> t;
    while (t-- > 0) {
        int n1,n2,n3;
        // unordered_map<int, int> umap;
        cin >> n1>>n2>>n3;
        int a1[n1],a2[n2],a3[n3];
        for (int i = 0; i < n1; i++) cin >> a1[i];
        for (int i = 0; i < n2; i++) cin >> a2[i];
        for (int i = 0; i < n3; i++) cin >> a3[i];
        // {
        //     cin >> a1[i];
        //     umap[a1[i]]=1;
        // }
        // for (int i = 0; i < n2; i++)
        // {
        //     cin >> a2[i];
        //     if (umap.find(a2[i]) == umap.end()) 
        //     {
                
        //     }
        //     else{
        //         umap[a2[i]]+=1;
        //     }
               
        // }
        
        // for (int i = 0; i < n3; i++)
        // {
        //     cin >> a3[i];
        //     if(umap[a3[i]]==2)
        //     {
        //         cout<<a3[i]<<" ";
        //         found=0;
        //     }
        // }
        
        int i=0,j=0,k=0,found=1;
        
        while(i<n1 && j<n2 && k<n3)
        {
            if(a1[i]==a2[j]&&a2[j]==a3[k])
            {
                cout<<a1[i]<<" ";
                i++;
                j++;
                k++;
                found=0;
            }
            else if(a1[i]<a2[j])
            {
                i++;
            }
            else if(a2[j]<a1[i])
            {
                j++;
            }
            else
            {
                k++;
            }
        }
        if(found){
            cout<<"-1";
        }
    }
	return 0;
}