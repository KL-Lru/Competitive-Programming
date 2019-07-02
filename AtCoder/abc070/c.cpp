#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
    if(a<b)return gcd(b,a);
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
    int n;
    ll lcm=1;
    cin>>n;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;
        lcm=t/gcd(t,lcm)*lcm;
    }
    cout<<lcm<<endl;
    return 0;
}