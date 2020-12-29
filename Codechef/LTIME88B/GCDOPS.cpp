#include <iostream>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n+1],b[n+1],p=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>b[i];
	        a[i]=i;
	        p=p+b[i];
	    }
	    if(n<=4){
	        int f=0;
	        if(b[1]!=1)
	        f++;
	        if(n>1&&b[2]!=2&&b[2]!=1)
	        f++;
	        if(n>2&&b[3]!=1&&b[3]!=3)
	        f++;
	        if(n>3&&b[4]!=1&&b[4]!=2&&b[4]!=4)
	        f++;
	        if(f>0)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	    }
	    else
	   { 
	    int x=-1,y=-1,c=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(b[i]!=i&&i%b[i]!=0){
	            c++;
	        }
	        
	    }
	    
	    if(c==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   }
	}
	return 0;
}
