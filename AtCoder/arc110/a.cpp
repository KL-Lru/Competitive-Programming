#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll x, ll y){
  if(x < y) return gcd(y, x);
  if(y == 0) return x;
  return gcd(y, x%y);
}

int main(){
  ll n;
  cin >> n;
  ll ans = 2;
  for(ll i = 3; i <= n; i++){
    ll gc = gcd(ans, i);
    ans = (ans * i / gc);
  }
  cout << ans + 1 << endl;
}
