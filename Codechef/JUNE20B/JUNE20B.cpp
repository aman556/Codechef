#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    unsigned long long int n;
	    cin>>n;
	    if(n==1)
	    cout<<"0"<<endl;
	    else if(n%2!=0)
	    {
	        cout<<n/2<<endl;
	    }
	    else if(n%2==0)
	    {
	        while(n%2==0&&n>0)
	        n=n/2;
	        cout<<n/2<<endl;
	    }
	}
	return 0;
}
