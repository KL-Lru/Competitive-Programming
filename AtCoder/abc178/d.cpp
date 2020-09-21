#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
ll modinv(ll a){
  ll x = 1;
  ll p = MOD - 2;
  while(p != 0){
    if (p % 2 == 1){
      x = (x * a) % MOD;
      p--;
    }
    a = (a * a) % MOD;
    p /= 2;
  }
  return x;
}

void init(vector<ll> &prd, vector<ll> &iprd){
  prd[0] = 1;
  iprd[0] = 1;
  for(int i=1; i<=2000; i++){
    prd[i] = (prd[i-1] * i) % MOD;
    iprd[i] = modinv(prd[i]);
  }
}


int main(){
  int s;
  cin >> s;
  vector<ll> prd(2001), iprd(2001);
  init(prd, iprd);

  int mx_cel = s/3;
  int part = s%3;
  ll ans = 0;
  for(int cel = mx_cel; cel > 0; cel --){
    ans =  (ans + (prd[(cel - 1 + part)] * (iprd[cel - 1] * iprd[part] % MOD)) % MOD) % MOD;
    part += 3;
  }
  cout << ans << endl;
}

