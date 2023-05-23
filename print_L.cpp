#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size";
  cin>>n;
  int i,j;
  for(i=0;i<3*n;i++)
  {
    for(j=0;j<n;j++)
      cout<<"*";
    cout<<endl;
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<4*n;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
