#include<iostream>
using namespace std;

int main()
{
	int a,i,j,c=1;
	cout<<"Enter first value\n";
	cin>>a;
	for (i=1;i<=a;i++)
	{
		//c=i+1;
		for (j=1;j<=i;j++)
		{
			cout<<c<<" ";
			c++;
		}
		cout<<endl;
	}
}
