
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int h[27]={0};
        for(int i=0;i<n;i++)
        h[s[i]-'a']++;
        while(q--){
       long long int c;
        cin>>c;
        int p=0;
        for(int i=0;i<27;i++)
        {
            if(h[i]>c)
            p=p+(h[i]-c);
        }
        cout<<p<<endl;
        }
    }

    return 0;
}
