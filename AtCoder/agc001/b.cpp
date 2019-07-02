#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll rec(ll a,ll b){
  if(b==0) return 0;
  if(a<b) return rec(b,a);
  return b*(a/b)+rec(b,a%b);
}

int main(){
  ll n,x;
  cin>>n>>x;
  cout<<3*rec(x,n-x)<<endl;
  return 0;
}