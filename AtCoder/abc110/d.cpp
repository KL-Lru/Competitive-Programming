#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll md=((1e+9)+7);
ll fact[100051];
ll inv[100051];
int extgcd(ll a, ll b, ll& x,ll& y){
  int d = a;
  if(b) {
    d = extgcd(b,a % b, y, x);
    y = (y - (a / b) * x) %md;
  }else{
    x=1;
    y=0;
  }
  return d;
}

ll factinv(ll a) {
  ll x, y;
  extgcd(a, md, x, y);
  return (x<0?x+md:x);
}

void init(int n){
  fact[0]=1;inv[0]=1;
  fact[1]=1;inv[1]=1;
  for(int i=2;i<=100050;i++){
    fact[i]=(fact[i-1]*i)%md;
    if(fact[i]<0)fact[i]+=md;
    inv[i]=factinv(fact[i]);
  }
}

ll conb(int n, int r){
  return (((fact[n+r-1]*inv[n-1])%md)*inv[r])%md;
}

int main(){
  int n,m;
  cin>>n>>m;
  init(n);
  vector<pair<int,int> > pv;
  for(int i=2;m!=1;i++){
    int cnt=0;
    if(m%i!=0) continue;
    while(m%i==0){
      m/=i;
      cnt++;
    }
    pv.push_back(pair<int,int>(i,cnt));
  }
  ll ans = 1;
  for(int i=0;i<pv.size();i++){
    ans = ans*conb(n,pv[i].second)%md;
  }
  cout<<ans<<endl;
}
