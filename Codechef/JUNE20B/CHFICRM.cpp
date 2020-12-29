#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]==15)
	    p++;
	    }
	    int c=0,v=0;
	    if(p==0)
	    {
	        
	        for(int i=0;i<n&&v==0;i++)
	        {
	           
	             if(a[i]==10&&c==0)
	            {
	                    cout<<"NO"<<endl;
	                    v++;
	                    break;
	            }
	           else if(a[i]==5)
	           c++;
	           else if(a[i]==10&&c>0)
	           c--;
	        }
	    if(v==0)
	    cout<<"YES"<<endl;
	    }
	    else{
	    for(int i=0;i<n&&v==0;i++)
	    {
	        if(c<(a[i]-5))
	        {
	            cout<<"NO"<<endl;
	            v++;
	            break;
	        }
	        else
	        {
	            c=c-(a[i]-5);
	            c=c+5;
	        }
	    }
	    if(v==0)
	    cout<<"YES"<<endl;
	    }
	}
	return 0;
}
