// 19. GCD of given index ranges in an array
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

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
    int l,r;
    cin>>l>>r;
    int result=arr[l];
    for(int i=l+1;i<=r;i++)
    {
        result = gcd(arr[i],result);
    }
    cout<<result<<endl;
    }
    return(0);
}