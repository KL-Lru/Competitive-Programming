#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<ll> a(n), b(n);
  for(auto &ai: a) cin >> ai;
  for(auto &bi: b) cin >> bi;
  ll sm = 0;
  for(int i=0; i<n; i++){
    sm += a[i] * b[i];
  }
  cout << (sm == 0 ? "Yes" : "No") << endl;
}