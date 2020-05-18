// 15. Find Maximum Product Subarray.

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<int> inp(n);
        for(ll i=0;i<n;i++)
        {
            cin>>inp[i];
        }
        if(n==1)
        {
            cout<<inp[0]<<endl;
            continue;
        }
        //maxsofar//minsofar//and max including this
        ll maxincl=1;
        ll minincl=1;
        ll maxsofar=0;
        bool fl=false,fl1=false;
        for(ll i=0;i<n;i++)
        {
            if(inp[i]>0)
            {
                maxincl=maxincl*inp[i];
                minincl=min(minincl*inp[i],1LL);
                
                fl=true;
            }
            else if(inp[i]==0)
            {
                maxincl=1;
                minincl=1;
                fl1=true;
            }
            else{
                ll temp=maxincl;
                maxincl=max(minincl*inp[i],1LL);
                minincl=temp*inp[i];
                // maxsofar=max(maxsofar,maxincl);
            }
            maxsofar=max(maxincl,maxsofar);
        }
        
        if(!fl&&maxsofar==1&&fl1){cout<<0<<endl;continue;}
        cout<<maxsofar<<endl;
    }

	return 0;
}
