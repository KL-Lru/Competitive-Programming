#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;
ll mod_sum(ll x){return (x*(x+1)/2)%MOD;}

int main(){
  ll a, b, c;
  cin >> a >> b >> c;
  cout << (((mod_sum(a) * mod_sum(b)) % MOD) * mod_sum(c)) % MOD << endl;
}