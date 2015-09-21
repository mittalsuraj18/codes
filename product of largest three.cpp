/*
Given an array of numbers, find the largest product of three numbers in the array
*/
#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
	if(a<b)
		return true;
	else return false;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[20];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,&arr[n]);
	/*for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}*/
	if(arr[0]<0 && arr[1]<0)
	{
		int k=arr[0]*arr[1]*arr[n-1];
		//cout<<k<<endl;
		if(k>arr[n-1]*arr[n-2]*arr[n-3])
		{
			cout<<k;
		}
		
		else cout<<arr[n-1]*arr[n-2]*arr[n-3];
		//cout<<arr[n-1]*arr[n-2]*arr[n-3]<<endl;
	}
	else cout<<arr[n-1]*arr[n-2]*arr[n-3];
	return 0;
}
