#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int start=1;
	int ans=1;
	while(start!=n)
	{
		ans+=1;
		string x=to_string(start);
		if(x.find('9')>=0)
			start+=1;
	}
	cout<<ans;
}
