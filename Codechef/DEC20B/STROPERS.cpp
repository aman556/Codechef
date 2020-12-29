#include <bits/stdc++.h>
using namespace std;
int slide1(string s1, int size1,int no1,int nz1,vector<int> l1,int so1,int se1,int n1)
{
set<pair<pair<int,int>,pair<int,int> > > sew1;
sew1.insert(make_pair(make_pair(no1,nz1),make_pair(so1,se1)));
for(int i1=size1;i1<n1;i1++)
{
if(s1[i1-size1]=='1')
{
l1.erase(l1.begin());
int t1=se1;
se1=so1;
so1=t1;
no1-=1;
}
else
{
nz1-=1;
l1[0]-=1;
se1-=1;
}
if(s1[i1]=='1')
{
no1+=1;
l1.push_back(0);
}
else
{
nz1+=1;
l1[l1.size()-1]+=1;
if(l1.size()%2==1)
{
se1+=1;
}
else
{
so1+=1;
}
}
sew1.insert(make_pair(make_pair(no1,nz1),make_pair(so1,se1)));
}
return sew1.size();
}
int substring1(string s1,int n1,int len1)
{
vector<int> l1;
int rt1=0,no1=0,nz1=0,so1=0,se1=0,cur1=0;
for(int i1=0;i1<n1;i1++)
{
if (s1[i1]=='0')
{
if (cur1%2==0)
se1+=1;
else
so1+=1;
rt1+=1;
nz1+=1;
}
else
{
l1.push_back(rt1);
rt1=0;
cur1+=1;
no1+=1;
}
}
l1.push_back(rt1);
return slide1(s1,n1,no1,nz1,l1,so1,se1,len1);
}
void solve1()
{
string s1;
cin>>s1;
int ans1=0;
for(int i1=0;i1<s1.size();i1++)
{
ans1+=substring1(s1,i1+1,s1.size());
}
cout<<ans1<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t1=1;
int c1=0;
cin>>t1;
while(t1--)
{
solve1();
c1+=1;
}
return 0;
}