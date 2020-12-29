#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long n,f=0,j=-1,p,k,s=0;
       cin>>n>>k;
       if(n==0)
            cout<<"1"<<endl;
        else{
       for(long long i=0;i<n;i++)
       {
           cin>>p;
           s=s+p-k;
           if(s<0 && f==0)
           {
               j=i;
               f++;
               //break;
           }
       }
       if(f==0&&s>=0)
       {
           cout<<n+(s/k)+1<<endl;
       }
       else
       cout<<j+1<<endl;
        }
   }
   
   return 0;
}