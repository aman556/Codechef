#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       cin>>a[i];
       int c=0,b=0;
       sort(a,a+n);
       for(int i=n-1;i>=0;i--)
       {
           if(b<c)
            b=b+a[i];
            else
            c=c+a[i];
       }
       if(c>b)
        cout<<c<<endl;
        else
        cout<<b<<endl;
   }
   
   return 0;
}