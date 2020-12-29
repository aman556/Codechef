#include<bits/stdc++.h>
using namespace std;
int main(){
    long t111,a111,b111;
    cin>>t111;
    while(t111--){
        cin>>a111>>b111;
        long even_a111=a111/2;
        long odd_a111=ceil(a111/2.0);
        long even_b111=b111/2;
        long odd_b111=ceil(b111/2.0);
        cout<<(even_a111*even_b111)+(odd_a111*odd_b111)<<endl;
    }
}