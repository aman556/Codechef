#include <iostream>
#include<map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    long int a[n],h[101]={0},o=1,d=0;
	    map<int,int> map;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        h[a[i]]++;
	    }
	    long int m=0,v=0;
	        for(int i=0;i<101;i++){
	            if(h[i]>1){
	                m=m+h[i];}
	                if(h[i]>v)
	                v=h[i];
	        }
	      for(int i=0;i<n;i++)
	      {
	          if(map[a[i]]!=1)
	          {
	              map[a[i]]=1;
	          }
	          else
	          {
	              o++;
	              map.clear();
	              map[a[i]]=1;
	          }
	      }
	            //if(k==1){
	              //  cout<<o*k<<endl;
	           // }
	           // else
	            //{
	                if(o*k<(m+k))
	                 cout<<o*k<<endl;
	                else
	                 cout<<m+k<<endl;
	            //}
	}
	return 0;
}
/*try o*k in k>1*/