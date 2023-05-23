#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,map<string,int> >departure;
  map<string,map<string,int> >arrival;
  string dc,ac;
  int dt,at;
  while(dc!="*")
  {
    cin>>dt>>ac>>at;
    departure[dc][ac]=dt;
    arrival[dc][ac]=at;
    cin>>dc;
  }
  int n,t;
  cin>>n;
  while(n--)
  {
    cin>>dc>>ac>>t;
    int th=0,tm=0,dh,dm,ah,am,i;
    tm=t%100;
    t=t/100;
    th=t%100;
    int d=departure[dc][ac];
    dm=d%100;
    d=d/100;
    dh=d%100;
    int a=arrival[dc][ac];
    am=a%100;
    a=a/100;
    ah=a%100;
    if((th< dh||(th==dh && tm<=dm))&&(ah>dh||(ah==dh && am>=dm)))
       cout<<arrival[dc][ac]<<endl;
    else
       cout<<"-1"<<endl;
  }
}       
