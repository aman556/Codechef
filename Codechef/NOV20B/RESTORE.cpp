#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int seive[4000001];
vector<int> v;
int main()
{
   int t;
   cin>>t;
   for(int i=2;i<4000001;i++)
   {
       if(seive[i]==0)
       {
           for(int j=2*i;j<4000001;j=j+i)
                seive[j]=1;
       }
       
   }
   for(int i=3;i<4000001;i++)
        if(seive[i]==0)
            v.push_back(i);
            //cout<<v.size()<<endl;
   while(t--)
   {
       int n,k=0,x=4;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
            cin>>a[i];
       map<int,int> m1,m2;
        for(int i=0;i<n;i++)
            m1[a[i]]++;
        for(int i=0;i<n;i++){
            if(m1[a[i]]>=1&&m2[a[i]]==0)
            {
                m2[a[i]]=v[k];
                k++;
            }
           
        }
        for(int i=0;i<n;i++)
        {
            
                cout<<m2[a[i]]<<" ";
            
        }
        cout<<endl;
   }
   
   return 0;
}