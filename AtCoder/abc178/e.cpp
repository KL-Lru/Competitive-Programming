#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> p(n);
  for(auto &x: p) cin >> x.first >> x.second;
  vector<pair<int, int>> ch(n);
  ll mxx = -1e+9, mnx = 1e+9;
  ll mxy = -1e+9, mny = 1e+9;
  for(int i=0; i<n; i++){
    ll x = p[i].first + p[i].second;
    ll y = p[i].first - p[i].second;
    mxx = max(mxx, x);
    mnx = min(mnx, x);
    mxy = max(mxy, y);
    mny = min(mny, y);
  }
  cout << max(mxx - mnx, mxy - mny) << endl;
}
