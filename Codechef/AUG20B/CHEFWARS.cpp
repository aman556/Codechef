#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    while(p>0)
	    {
	        n=n-p;
	        p=p/2;
	    }
	    if(n>0)
	    cout<<"0"<<endl;
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}
