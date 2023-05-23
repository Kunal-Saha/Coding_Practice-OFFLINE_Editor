#include<iostream>
using namespace std;
void main()
{
	int n;
	int i,j;
	cout<<"Enter the size\n";
	cin>>n;
	int arr[n];
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				a[i]=(indexOf(arr[i]))
			}
		}
	}
	cout<<a[0];
}
