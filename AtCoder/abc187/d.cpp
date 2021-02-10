#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main () {
  int n;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  for (auto &vi: v) cin >> vi.first >> vi.second;

  ll sm = 0;
  for (int i=0; i<n; i++){
    sm += v[i].first;
  }

  sort(v.begin(), v.end(), [](const pair<ll, ll> x, const pair<ll, ll> y){
    return x.first * 2 + x.second > y.first * 2 + y.second;
  });

  ll cur = 0;
  for(int i=0; i<n; i++){
    if(cur > sm) {
      cout << i << endl;
      return 0;
    }
    cur += v[i].first * 2 + v[i].second;
  }
  cout << n << endl;
}