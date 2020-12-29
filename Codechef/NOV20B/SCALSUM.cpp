#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long mod=4294967296;
int main()
{
   int n,q1;
   cin>>n>>q1;
   long a[n+1];
   vector<vector<int>> v(n+1);
   int par[n+1]={0};
   for(int i=1;i<=n;i++)
    cin>>a[i];
   
   for(int i=0;i<n-1;i++)
   {
       int x,y;
       cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
   }
   queue<int> q;
   q.push(1);
   int vis[n+1]={0};
   while(!q.empty())
   {
       int p=q.front();
       q.pop();
       vis[p]=1;
       for(int i=0;i<v[p].size();i++)
       {
           if(vis[v[p][i]]==0){
           par[v[p][i]]=p;
           q.push(v[p][i]);
           }
       }
   }
   while(q1--)
   {
       int u,v;
       cin>>u>>v;
       long c=0;
       while(u!=0&&v!=0)
       {
           c=(c%mod+(a[u]%mod*a[v]%mod)%mod)%mod;
           u=par[u];
           v=par[v];
       }
        cout<<c<<endl;
   }
   return 0;
}