
// 8) Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.

#include<iostream>
using namespace std;

int main()
{
    int n;
    int count0=0,count1=0,count2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ip;
        cin>>ip;
        if(ip==0) count0++;
        if(ip==1) count1++;
        if(ip==2) count2++;
    }
    for(int i=0;i<count0;i++)
    {
        cout<<'0';
    }
    for(int i=0;i<count1;i++)
    {
        cout<<'1';
    }
    for(int i=0;i<count2;i++)
    {
        cout<<'2';
    }
    cout<<endl;
    return(0);
}