#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    int count=1,depth=0;
    ll tmp=n;
    while(tmp!=1){
        depth++;
        tmp/=2;
    }
    tmp=1;
    if(depth%2==0){
        while(tmp<=n){
            if(count%2!=0) tmp=2*tmp+1;
            else tmp=2*tmp;
            count++;
        }
    }else{
        while(tmp<=n){
            if(count%2!=0) tmp=2*tmp;
            else tmp=2*tmp+1;
            count++;
        }
    }
    if(count%2!=0) cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
    return 0;
}