#include <bits/stdc++.h> 
using namespace std; 
 int prims(vector<vector<int>> &graph,int v)
 {
     int key[v];long long res=0;
     fill(key,key+v,INT_MIN);
     key[0]=0;
     bool mset[v]={false};
     for(int i=0;i<v;i++)
     {
         int u=-1;
         
         //finding the min edge 
         for(int j=0;j<v;j++)
         {
             if(!mset[j]&&(u==-1||key[j]>key[u]))
                u=j;
         }
        
         mset[u]=true;
         res=res+key[u];
         
         
         //updating the max value for each vertex
         for(int k=0;k<v;k++)
         {
             if(graph[u][k]!=0&&!mset[k])
             {
                 key[k]=max(key[k],graph[u][k]);
             }
         }
     }
     return res;
 }

int main()
{
    int n,d,z=0;
    cin>>n>>d;
    int a[n][d];
    vector<vector<int>> graph;
    
    
    //taking input of dimensions of each vertex
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<d;j++)
        {
            int c;
            cin>>c;
            a[i][j]=c;
        }
        vector<int> v1(n,0);
        graph.push_back(v1);
    }
    
    
    //finding weight of each edge 
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int w=0;
            for(int k=0;k<d;k++)
            {
                w=w+abs(a[i][k]-a[j][k]);
            }
            graph[i][j]=w;
            graph[j][i]=w;
        }
    }
    
    cout<<prims(graph,n)<<endl;
   
   return 0;
}