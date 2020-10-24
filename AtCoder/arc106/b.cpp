#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
using vb = vector<bool>;
using vvl = vector<vl>;
using pl = pair<ll, ll>;

pl check(ll node, vvl &edge, vb &checked, vl &a, vl &b){
  if(checked[node]) return {0,0};
  checked[node] = true;
  pl ret ({a[node], b[node]});
  for(auto e: edge[node]){
    if(checked[e]) continue;
    pl t = check(e, edge, checked, a, b);
    ret.first += t.first;
    ret.second += t.second;
  }
  return ret;
}

int main(){
  int n, m, c, d;
  cin >> n >> m;
  vl a(n), b(n);
  vb checked(n, false);
  vvl edge(n, vl());
  for(auto &x: a) cin >> x;
  for(auto &x: b) cin >> x;
  for(int i=0; i<m; i++){
    cin >> c >> d;
    c--; d--;
    edge[c].push_back(d);
    edge[d].push_back(c);
  }
  for(int i=0; i<n; i++){
    pl ch = check(i, edge, checked, a, b);
    if(ch.first != ch.second) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;

}