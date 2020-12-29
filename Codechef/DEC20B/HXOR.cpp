#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t11;
    scanf("%d",&t11);
    while(t11--){
        long long n11,x11,i11,j11=1,pi11=0,pj11=0,var11,res11,power11,temp11,bo1=0;
        scanf("%lld",&n11);
        scanf("%lld",&x11);
        long long arr11[n11],brr11[n11][32],bit1[n11];
        std::vector<queue<int> > vs11(32);
        for(i11=0;i11<n11;i11++){
            scanf("%lld",&arr11[i11]);
            temp11=arr11[i11];
            var11=0;
            while(temp11>0){
                if(temp11%2==1){
                    brr11[i11][var11]=1;
                    vs11[var11].push(i11);
                }
                else brr11[i11][var11]=0;
                temp11/=2;
                if(temp11>0)  var11++;
            }
           for(int i1=var11+1;i1<32;i1++)
                brr11[i11][i1]=0;
            
        }
        for(i11=0;i11<n11-1 &&x11>0;i11++){
            j11=31;
            while(j11>=0 && x11>0){
                if(brr11[i11][j11]!=0){
                    vs11[j11].pop();
                    brr11[i11][j11]=0;
                    if(vs11[j11].size() == 0)
                        brr11[n11-1][j11] ^= 1;
                    else
                    {
                        int kemp11=vs11[j11].front();
                        brr11[kemp11][j11]=0;
                        vs11[j11].pop();
                    }
                    x11--;
                }
                j11--;
            }
        }
          if(n11 == 2 && x11 % 2 != 0)
        {
            brr11[n11-2][0] = 1;
            brr11[n11-1][0] ^= 1;
        }
      

        for(i11=0;i11<n11;i11++){
            res11=0;
             for(j11=0;j11<=31;j11++){
                if(brr11[i11][j11]==1){
                    res11+=(1<<j11);
                }
             }
             printf("%lld ",res11);
        }
        printf("\n");
    }
    return 0;
}