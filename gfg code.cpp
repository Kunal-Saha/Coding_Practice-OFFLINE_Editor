#include<iostream>
using namespace std;
int main()
 {
	//code
	cout<<"test case"<<endl;
	int T;
	cin>>T;
	if(T>=1 && T<=100)
	{
	    
	    
	    while(T--)
	    {
	    	cout<<"Size of array"<<endl;
	        int n;
	        cin>>n;
	        int a[n];
	        int x;
	        cout<<"Search no"<<endl;
	        cin>>x;
	        int f=0;
	        cout<<"Enter the Array"<<endl;
	        for(int i=0;i<n;i++)
	            cin>>a[i];
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]==x)
	            {
	                f=1;
	                cout<<i<<" ";
	                break;
	            }
	        }
	        if(f!=1)
	        {
	            cout<<-1<<" ";
	            break;
	        }
	       
	       for(int j=n-1;j>=0;j--)
	       {
	           if(a[j]==x)
	           {
	               cout<<j<<endl;
	               break;
	           }
	       }
	       

	    }
	}
	return 0;
}
