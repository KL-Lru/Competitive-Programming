#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,ct=0,oct=0;
    bool f[8];
    for(int i=0;i<8;i++) f[i]=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=3200)oct++;
        else if(f[a/400]){
            f[a/400]=false;
            ct++;
        }
    }
    cout<<(ct==0?1:ct)<<" "<<ct+oct<<endl;
    return 0;
}