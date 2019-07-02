#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,k,p;
    bool f[101]={};
    cin>>n>>a>>b>>k;
    f[a]=true;
    f[b]=true;
    int i;
    for(i=0;i<k;i++){
        cin>>p;
        if(f[p]) break;
        f[p]=true;
    }if(i!=k) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}