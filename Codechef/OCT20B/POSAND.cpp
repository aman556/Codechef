#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   int p=(n&(n-1));
   if(p==0&&n!=1)
    cout<<"-1"<<endl;
    else if(n==1)
        cout<<"1"<<endl;
    else
    {
        cout<<"2 3 1";
        for(int i=4;i<=n;i++)
        {
            int x=i&(i-1);
            if(x==0)
            {
                cout<<" "<<i+1<<" "<<i;
                i++;
            }
            else
                cout<<" "<<i;
        }
        cout<<endl;
    }
    }
   return 0;
}