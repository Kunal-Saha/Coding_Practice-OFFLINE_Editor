// mAx of 3 variable in c++

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter first value\n";
	cin>>a;
	cout<<"Enter Second value\n";
	cin>>b;
	cout<<"Enter third value\n";
	cin>>c;
	cout<<"The Max Value is : ";
	if (a>b && a>c)
		cout<<a;
	else if (b>a && b>c)
		cout<<b;
	else
		cout<<c;
}
