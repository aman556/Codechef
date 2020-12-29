#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long int n,x,p,k,c=0,f=0;
       cin>>n>>x>>p>>k;
       long int a[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        if(a[p-1]==x)
        {
            cout<<"0"<<endl;
        }
        else{
            if(a[p-1]<x&&p<k)
                cout<<"-1"<<endl;
            else if(a[p-1]>x&&p>k)
                cout<<"-1"<<endl;
            else
            {
                 if(a[p-1]>x&&p<=k){
                    int j=p-1;
                    while(a[j]>x&&j>=0){
                        j--;c++;}
                        cout<<c<<endl;
                }
                else if(a[p-1]<x&&p>=k)
                {
                    int j=p-1;
                    while(a[j]<x&&j<n){
                        j++;c++;}
                        cout<<c<<endl;
                }
            }
        }
   }
   return 0;
}