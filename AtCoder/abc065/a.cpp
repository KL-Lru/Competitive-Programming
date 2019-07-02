#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=7+1e9;

ll fact(ll n){
  if(n<=1) return 1;
  else return n*fact(n-1)%mod;
}

int main(){
  int n,m;
  ll ans;
  cin>>n>>m;
  if(abs(n-m)==0)
    ans=fact(n)*fact(m)*2;
  else if(abs(n-m)<=1)
    ans=fact(n)*fact(m);
  else
    ans=0;
  cout<<(ans%mod)<<endl;
  return 0;
}