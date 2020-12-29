#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,m,o=0,c=0;
       cin>>n>>m;
       string s;
       cin>>s;
       vector<int> sheets(n);
       
       sheets[0]=0;
        
       for(int i=1;i<n;i++)
       {
           if(s[i]==':')
                sheets[i]=sheets[i-1]+1;
            else if(s[i]!=':'&&s[i]!='X')
                sheets[i]=sheets[i-1];
            else if(s[i]=='X')
                sheets[i]=0;
       }
       
      
       int k=0;
       while(k<n)
       {
           vector<int> mg,fe;
           while(s[k]!='X'&&k<n){
               if(s[k]=='M')
                mg.push_back(k);
                else if(s[k]=='I')
                fe.push_back(k);
                k++;
           }
           int i=0,j=0;
           while(i<mg.size()&&j<fe.size())
           {
               int sh=abs(sheets[mg[i]]-sheets[fe[j]]);
                int ind=abs(mg[i]-fe[j]);
                int p=m+1-sh-ind;
                if(p>0)
                {
                    c++;
                    i++;
                    j++;
                }
                else if(mg[i]<fe[j])
                {
                    i++;
                }
                else
                    j++;
           }
           k++;
       }
       cout<<c<<endl;
   }
   return 0;
}