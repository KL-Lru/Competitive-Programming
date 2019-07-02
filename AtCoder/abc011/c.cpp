#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ng[3],ct=0;
    bool f=false;
    cin>>n>>ng[0]>>ng[1]>>ng[2];
    if(n==ng[0]||n==ng[1]||n==ng[2])f=true;
    while(n>0&&!f){
        ct++;
        n-=3;
    if(n==ng[0]||n==ng[1]||n==ng[2])n++;
    if(n==ng[0]||n==ng[1]||n==ng[2])n++;
    if(n==ng[0]||n==ng[1]||n==ng[2])f=true;
    }
    if(ct>100||f) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}