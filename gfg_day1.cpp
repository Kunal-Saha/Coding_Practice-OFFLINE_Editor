#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    vector<int>v;
	    int c=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='1')
	        {
	            c++;
	        }
	        else
	        {
	            if(c>0)
	                v.push_back(c);
	            c=0;
	        }
	    }
	    if(v.size()==1)
	        cout<<"YES"<<endl;
	    else 
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
