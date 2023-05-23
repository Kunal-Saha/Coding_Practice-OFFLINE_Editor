#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n<=20)
  {
    char a[n];
    int c,d;
    c=d=0;
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<n;i++)
    {
      if(a[i]=='A')
        c++;
      else if(a[i]=='B')
        d++;
    }
    if((c>d))
      cout<<"A";
    else if((d>c))
      cout<<"B";
    else
      cout<<"Tie";
  }
}
