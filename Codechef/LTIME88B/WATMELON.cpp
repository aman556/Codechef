#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int s=0;
	for(int i=0;i<n;i++)
	{
	    int p;
	    cin>>p;
	    s=s+p;
	}
	if(s>=0)
	    cout<<"YES"<<endl;
	   else
	    cout<<"NO"<<endl;
	}
	return 0;
}
