#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,s=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        int p;
	        cin>>p;
	        if(p>k)
	        s=s+p-k;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
