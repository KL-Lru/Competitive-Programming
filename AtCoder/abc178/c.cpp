#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
ll modpow(ll a, ll p){
  ll x = 1;
  while(p != 0){
    if(p%2 == 1){
      x = (x * a) % MOD;
      p--;
    }
    a = (a * a) % MOD;
    p /= 2;
  }
  return x;
}

int main(){
  int n;
  cin >> n;
  ll ans = (modpow(10, n) - 2 * modpow(9, n) + modpow(8, n)) % MOD;
  while(ans < 0) ans += MOD;
  cout << ans << endl;

}