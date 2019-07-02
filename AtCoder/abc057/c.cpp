#include<bits/stdc++.h>
using namespace std;
#define ll long long
int digits(ll n){
    int ct=0;
    while(n!=0){
        n/=10;
        ct++;
    }
    return ct;
}

int main(){
    ll n,m=0;
    cin>>n;
    ll sq=sqrt(n);
    for(ll i=2;i<=sq;i++)
        if(n%i==0)m=i;
    if(m==0)cout<<digits(n)<<endl;
    else cout<<(m>n/m?digits(m):digits(n/m))<<endl;
    return 0;
}