#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf LLONG_MAX
int main(){
    ll n,h,a,b,c,d,e,m=inf;
    cin>>n>>h>>a>>b>>c>>d>>e;
    for(ll i=0;i<=n;i++){
        ll k=n*e-i*(b+e)-h;
        ll j=k<0?0:k/(d+e)+1;
        m=min(m,i*a+j*c);
    }
    cout<<m<<endl;
    return 0;
}