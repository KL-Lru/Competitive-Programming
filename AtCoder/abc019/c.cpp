#include<bits/stdc++.h>
using namespace std;
#define max 100000
int main(){
    int n,ct=0;
    set<int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        while(t%2==0) t/=2;
        a.insert(t);
    }
    for(auto x:a)
        ct++;
    cout<<ct<<endl;
    return 0;
}