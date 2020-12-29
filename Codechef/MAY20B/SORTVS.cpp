#include <iostream>
#include<algorithm>
using namespace std;
int c=0;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m=0;
	    cin>>n>>m;
	    int a[n+1];
	    c=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    while(m>0)
	    {
	        int i,j;
	        cin>>i>>j;
	        i=i;j=j;
	        int p=a[i];
	        a[i]=a[j];
	        a[j]=p;
	        m--;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        if(a[i]!=i){
	        for(int j=i+1;j<=n;j++)
	        {
	            if(a[j]==i)
	            {
	                int p=a[i];
	                a[i]=a[j];
	                a[j]=p;
	                c++;
	            }
	        }
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
