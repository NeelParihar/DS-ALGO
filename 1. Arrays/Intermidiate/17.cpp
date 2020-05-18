// 17. Find the minimum element in a rotated and sorted array.
#include <iostream>
using namespace std;

int minf(int A[], int low, int high){
    int mid;
    mid=(low+high)/2;
    while(low<high){
        //if minimum is in left;
        if(A[mid]<A[high])
        {    low =0;
            high=mid;
        }  
        //if minimum is in right;
        else
        {
            low =mid+1;
        }
        mid=(low+high)/2;
    }
    return A[mid];
}

int main() {
    int T, N=1000, A[N], x;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0; i<N; i++)
            cin>>A[i];
        x=minf(A, 0, N-1);
        cout<<x;
        cout<<endl;
    }

	return 0;
}