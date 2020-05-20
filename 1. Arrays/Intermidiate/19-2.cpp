/// 19. GCD of given index ranges in an array [Segment trees]
#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }

    return(gcd(b,a%b));
}

void buildtree(int *tree,int* arr,int index,int s,int e)
{
    //base case
    if(s>e)
    {
        return;
    }

    //leafnode
    if(s==e)
    {
        tree[index]=arr[s];
        return;
    }

    //recursive case
    int mid= (s+e)/2;
    //Left sub tree
    buildtree(tree,arr,2*index,s,mid);
    //right sub tree
    buildtree(tree,arr,2*index+1,mid+1,e);

    int left= tree[2*index];
    int right = tree[2*index+1];

    tree[index]= gcd(left,right);
}

int queryrange(int *tree,int index,int s,int e,int qs,int qe)
{
    //No overlap
    if(qs>e||qe<s)
    {
        return 0;
    }

    //Complete overlap

    if(qs<=s&&qe>=e)
    {
        return tree[index];
    }

    //Partial overlap

    int mid=(s+e)/2;

    int leftans=queryrange(tree,2*index,s,mid,qs,qe);
    int rightans=queryrange(tree,2*index+1,mid+1,e,qs,qe);

    return(gcd(leftans,rightans));

}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *tree = new int[4*n+1];
    buildtree(tree,arr,1,0,n-1);
    

    for(int i=1;i<=4*n+1;i++)
    {
        cout<<tree[i]<<" ";
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        
        cout<<queryrange(tree,1,0,n-1,l,r)<<endl;
        
    }
    return(0);
}