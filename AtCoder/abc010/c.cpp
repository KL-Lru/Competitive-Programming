#include<bits/stdc++.h>
using namespace std;
#define max 1000

int main(){
    int tx[2],ty[2],t,v,n;
    int x,y;
    bool f=false;
    cin>>tx[0]>>ty[0]>>tx[1]>>ty[1]>>t>>v>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(sqrt(pow(x-tx[0],2)+pow(y-ty[0],2))+sqrt(pow(x-tx[1],2)+pow(y-ty[1],2))<=t*v)f=true;
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}