#include <bits/stdc++.h>
using namespace std;

int main() {
	int v11,d11,v21,d21,p1,c1=0,m1=0;
	cin>>d11>>v11>>d21>>v21>>p1;
	c1=min(d11,d21);
	while(m1<p1)
	{
	    if(c1>=d11)
	    m1=m1+v11;
	    if(c1>=d21)
	    m1=m1+v21;
	    c1++;
	}
	cout<<c1-1;
	return 0;
}
