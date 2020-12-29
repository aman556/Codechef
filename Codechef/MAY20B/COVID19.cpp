
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n]={0},h[n]={0},k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=1;
        }
        b[0]=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<=2)
            b[i]=1+b[i-1];
            else
            {
                b[i]=1;
                h[k++]=b[i-1];
            }
        }
        
        if(k==0)
        {
            cout<<b[n-1]<<" "<<b[n-1]<<endl;
        }
        else{
            h[k++]=b[n-1];
        sort(h,h+k);
        cout<<h[0]<<" "<<h[k-1]<<endl;
        }
    }

    return 0;
}
