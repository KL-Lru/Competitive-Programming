#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

template <typename Head>
ll modprod(Head head){return head;}
template <typename Head, typename... Tail>
ll modprod(Head head, Tail... tail) {
  return (head * modprod(tail...)) % MOD;
}

template <typename Head>
ll modsum(Head head){return head;}
template <typename Head, typename... Tail>
ll modsum(Head head, Tail... tail) {
  return (head + modsum(tail...)) % MOD;
}

ll modpow(ll x, ll p) {
  ll a = 1;
  while(p > 0) {
    if(p % 2 == 1) a = modprod(a, x);
    x = modprod(x, x);
    p /= 2;
  }
  return a;
}

ll inv(ll x){
  return modpow(x, MOD-2);
}

int main(){
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> fact(n+1), invfact(n+1);
  fact[0] = 1; invfact[0] = 1;
  for(int i=1; i<=n; i++) {
    fact[i] = modprod(i, fact[i-1]);
    invfact[i] = inv(fact[i]);
  }

  ll ans = 0;
  for(int i=0; i<=k; i++) {
    ll pat = modprod(m, modpow(m-1, n-i-1), fact[n - 1], invfact[i], invfact[n - i - 1]);
    ans = modsum(ans, pat);
  }
  cout << ans << endl;
}