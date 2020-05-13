// Find the Union and Intersection of the two sorted arrays.
#include <iostream>
using namespace std;
void printUnion(int arr1[],int arr2[],int n,int m)
{
	
		int i=0,j=0;
		cout<<"\nUnion ";
		while(i<n && j<m)
		{
			if(arr1[i]<arr2[j])
			{
				cout<<arr1[i]<<" ";
				i++;
			}
			else if(arr1[i]>arr2[j])
			{
				cout<<arr2[j]<<" ";
				j++;
			}
			else{
				cout<<arr2[j]<<" ";
				i++;
				j++;
			}
		}
		while(i<n){
			cout<<arr1[i]<<" ";
			i++;
		}
		while(j<m)
		{
			cout<<arr2[j]<<" ";
			j++;
		}
	
}

void printIntersect(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;
	cout<<"\nIntersection ";
		while(i<n && j<m)
		{
			if(arr1[i]<arr2[j])
			{
				i++;
			}
			else if(arr1[i]>arr2[j])
			{
				j++;
			}
			else{
				cout<<arr2[j]<<" ";
				i++;
				j++;
			}
		}
}
int main() {
	//code
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
	{
	    cin>>arr1[i];
	}
	for(int i=0;i<m;i++)
	{
	    cin>>arr2[i];
	}
	printUnion(arr1,arr2,n,m);
	printIntersect(arr1,arr2,n,m);
	return 0;
}