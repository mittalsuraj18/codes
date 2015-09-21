/*
given an array and a window size that is sliding along the array, find the sum of the count of unique elements in each window
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[20];
	int soln[20]={0};
	int count=0,n;
	int sum=0;
	int win_size;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>win_size;
	for(int i=0;i<win_size;i++)
	{
		soln[arr[i]]++;
		if(soln[arr[i]]==1)
		{
			count++;
		}
		if(soln[arr[i]]==2){
			count--;
		}
	}
	sum+=count;
	cout<<count<<endl;
	for(int i=win_size;i<n;i++){
		soln[arr[i-win_size]]--;
		soln[arr[i]]++;
		if(soln[arr[i-win_size]]==0)
		{
			count--;
		}if(soln[arr[i-win_size]]==1)
		{
			count++;
		}
		if(soln[arr[i]]==1)
		{
			//soln[arr[i]]++;
			count++;
		}
		else if(soln[arr[i]]==2)
		{
			count--;
		}
		cout<<count<<endl;
		sum+=count;
	}
	cout<<endl;
	cout<<sum;
	return 0;
}
