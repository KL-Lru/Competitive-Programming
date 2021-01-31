#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e+9 + 7;
ll fact[901] = {};
ll fact_inv[901] = {};

ll mod_inverse(ll x){
  ll ret = 1;
  ll p = MOD - 2;
  while(p != 0){
    if(p % 2 == 1) {
      ret = (ret * x) % MOD;
    }
    x = (x * x) % MOD;
    p /= 2;
  }
  return ret;
}

void init() {
  fact[0] = 1;
  fact_inv[0] = 1;
  for(int i = 1; i <= 900; i++){
    fact[i] = (fact[i-1] * i) % MOD;
    fact_inv[i] = mod_inverse(fact[i]);
  }
}

ll comb(ll all, ll desk, ll lack){
  if(all < desk + lack) return 0;
  ll ret = fact[all];
  ret = (ret * fact_inv[desk]) % MOD;
  ret = (ret * fact_inv[lack]) % MOD;
  ret = (ret * fact_inv[all - (desk + lack)]) % MOD;
  return ret;
}

ll calc(ll x, ll y, ll desk, ll lack) {
  if (x * y < desk + lack) return 0;
  int ret = 0;
  const size_t bit_length = 4;
  for(int i=0; i < (1 << bit_length); i++){
    int dx = 0, dy = 0;
    for(int bit = 0; bit < bit_length; bit++) {
      if(i >> bit & 1) ((bit & 1) ? dx : dy)++;
    }
    if(x < dx || y < dy) continue;
    ret = (ret + (bitset<bit_length>(i).count() % 2 == 0 ? 1 : -1) * comb((x - dx) * (y - dy), desk, lack) + MOD) % MOD;
  }
  return ret;
}

int main(){
  int r, c, x, y, d, l;
  cin >> r >> c >> x >> y >> d >> l;
  ll magni = (r - x + 1) * (c - y + 1);
  init();
  cout << (magni * calc(x, y, d, l)) % MOD << endl;
}
