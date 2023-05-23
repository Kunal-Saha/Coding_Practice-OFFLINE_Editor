#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	return 0;
}
