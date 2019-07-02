#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll gcd(ll m,ll n){
  if(m<n) return gcd(n,m);
  if(n==0) return m;
  ll md = m % n;
  return gcd(n,md);
}
int main(){
  ll n;
  ll x,a;
  cin>>n>>x;
  ll d[100001]={};
  for(int i=0;i<n;i++){
    cin>>d[i];
    if(i==0)
      a = abs(x-d[i]);
    else
      a = gcd(abs(x-d[i]),a);
  }
  cout<<a<<endl;
}
