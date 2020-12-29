#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t1;
	cin>>t1;
	while(t1--)
	{
	    long int n1,d1,r1=0,c1=0,p1=0;
	    cin>>n1>>d1;
	    long int a1[n1];
	    for(int i1=0;i1<n1;i1++)
	        cin>>a1[i1];
	    for(long int i1=0;i1<n1;i1++)
	    {
	        if(a1[i1]<=9 || a1[i1]>=80)
	            r1++;
	        else
	            c1++;
	    }
	    
	        p1=p1+ceil(c1/(floor)(d1))+ceil(r1/(floor)(d1));
	   cout<<p1<<endl;
	}
	return 0;
}
