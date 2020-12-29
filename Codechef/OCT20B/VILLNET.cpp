#include<bits/stdc++.h>
using namespace std;
int num=INT_MAX;

void funnnn(long long int xpoint1,long long int ypoint1,long long int xpoint2,long long int ypoint2,int paisa)
{
    if(xpoint1==xpoint2 && ypoint1==ypoint2 && paisa<juhi)
    {
        num=paisa;
        return;
    }
    if(paisa>8)
        return;
    funnnn(xpoint1+2*ypoint1,ypoint1,xpoint2,ypoint2,paisa+1);
    funnnn(xpoint1-2*ypoint1,ypoint1,xpoint2,ypoint2,paisa+1);
    if(ypoint1+2*xpoint1>0)
        funnnn(xpoint1,ypoint1+2*xpoint1,xpoint2,ypoint2,paisa+1);
    else if(ypoint1+2*xpoint1<0)
        funnnn(-xpoint1,-(ypoint1+2*xpoint1),xpoint2,ypoint2,paisa+1);
    if(ypoint1-2*xpoint1>0)
        funnnn(xpoint1,ypoint1-2*xpoint1,xpoint2,ypoint2,paisa+1);
    else if(ypoint1-2*xpoint1<0)
        funnnn(-xpoint1,-(ypoint1-2*xpoint1),xpoint2,ypoint2,paisa+1);


}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
      long long  int xpoint1,ypoint1,xpoint2,ypoint2;
        cin>>xpoint1>>ypoint1>>xpoint2>>ypoint2;
        num=INT_MAX;
        funnnn(xpoint1,ypoint1,xpoint2,ypoint2,0);
        cout<<num<<endl;
    }

    return 0;
}
