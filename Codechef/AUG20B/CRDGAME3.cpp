#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,c1=0,c2=0,k=9;
		cin>>n>>m;
		if(n>=9)
		c1=n/9;
		if(m>=9)
		c2=m/9;
		n=n%9;m=m%9;
		if(n>0)
		c1++;
		if(m>0)
		c2++;
		if(c2<=c1)
		{
				cout<<"1"<<" "<<c2<<endl;
		}
		else
		{
				cout<<"0"<<" "<<c1<<endl;
		}
		
	}
	return 0;
}