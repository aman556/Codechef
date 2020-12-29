#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t111;
    cin>>t111;
    while(t111--){
        int n111,k111;
        cin>>n111>>k111;
        int temp111=n111-k111;
        int arr111[n111+1];
        if(temp111<=n111/2){
        for(int j1=1;j1<=n111;j1++){
            arr111[j1]=j1;
            if(j1%2!=0 && temp111>0){
                arr111[j1]=-arr111[j1];
                temp111--;
                }
            }
        }
        else{
                temp111=k111;
        for(int j1=1;j1<=n111;j1++){
            arr111[j1]=-j1;
            if(j1%2==0 && temp111>0){
                arr111[j1]=-arr111[j1];
                temp111--;
                }
            }
        }
        for(int i1=1;i1<=n111;i1++)
            {cout<<arr111[i1]<<" ";}
        cout<<endl;
    }

    return 0;
}