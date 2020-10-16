#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using p = pair<ll,ll>;
using mp = map<p, ll>; 
int main(){
  mp m;
  ll n, t, f, tx, fx;
  double a;
  ll la;
  ll ans = 0;
  p key;
  ll val;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a;
    la = static_cast<ll>(a * 1e+9 + 0.5);
    t = 0; f = 0;
    while(la%2 == 0) {
      la/=2; 
      t++;
    }
    while(la%5 == 0) {
      la/=5;
      f++;
    }
    t -= 9;
    f -= 9;
    for(const auto r: m){
      tie(key, val) = r;
      tie(tx, fx) = key;
      if(t + tx >= 0 && f + fx >= 0) ans += val;
    }
    m[{t,f}]++;
  }
  cout << ans << endl;
}