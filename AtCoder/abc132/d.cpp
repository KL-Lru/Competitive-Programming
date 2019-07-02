#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = (1e+9) +7;
ll mod_inverse(ll a){
  ll x = 1, n = MOD - 2;
  while(n != 0){
    if(n%2 == 1){ 
      x = (x * a) % MOD;
      n -= 1;
    }else{
      a = (a * a) % MOD;
      n /= 2;
    }        
  }
  return x;
}

int main(){
  int n,k;
  cin >> n >> k;
  vector<ll> st(2001), invst(2001);
  int tkn = n-k-1;
  int tk = k-1;
  st[0] = 1; invst[0] = 1;
  st[1] = 1; invst[1] = 1;
  for(int i=2;i<=2000;i++){
    st[i] = (i*st[i-1]) % MOD;
    invst[i] = mod_inverse(st[i]);
  }
  if( k == n){
    for(int i=1;i<=k;i++){
      if(i == 1) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }else {
    for(int i=1;i<=k;i++){
      ll ans = 0;
      // 青球をi個の塊に分割する組み合わせが何パターンあるか
      // k-1の2項係数
      ll blue = (((st[tk] * invst[i-1]) % MOD) * invst[tk-i+1]) %MOD;
      // i-1個の穴を埋め,その両端分余裕がある
      // 赤球はi-1 ~ i+1個の塊
      for(int j = max(i-1,1);j <= min(i+1, n-k); j++ ){
        ll red = (((st[tkn] * invst[j-1]) % MOD) * invst[tkn-j+1]) %MOD;
        if(j == i-1 || j == i+1) ans = (ans + red * blue) % MOD;
        if(j == i) ans = (ans + 2*((red * blue) % MOD)) % MOD;
      }
      cout << ans << endl;
    }
  }
}