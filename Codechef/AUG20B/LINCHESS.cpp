#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	  long long  int n,p,s=1000000000,j=-1;
	    cin>>n>>p;
	    for(long long int i=0;i<n;i++)
	    {
	        int v;
	        cin>>v;
	        if(p%v==0&&p!=v)
	        {
	            if(s>p/v-1)
	            {
	                s=(p/v-1);
	                j=v;
	            }
	        }
	    }
	    
	    cout<<j;
	    cout<<endl;
	}
	return 0;
}
