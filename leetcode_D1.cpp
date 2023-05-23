#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ld;
    int c=0;
    while(n!=0)
    {
        ld=n%10;
        if(ld==1)
        {
            c+=1;
        }
        n=n/10;
    }
    cout<<c;
}
