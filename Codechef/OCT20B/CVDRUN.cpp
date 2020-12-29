#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
   int n,k,x,y,f=0;
   cin>>n>>k>>x>>y;
   if(x==y)
        cout<<"YES"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            x=(x+k)%n;
            if(x==y)
            {
                cout<<"YES"<<endl;
                f++;
                break;
            }
        }
        if(f==0)
            cout<<"NO"<<endl;
    }
    }
   return 0;
}