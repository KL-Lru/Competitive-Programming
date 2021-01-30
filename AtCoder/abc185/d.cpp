#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(m);
  for(auto &ai: a) cin >> ai;
  sort(a.begin(), a.end());
  int k = n;
  int before = 0;
  for(int i = 0; i < m; i++){
    int diff = a[i] - before - 1;
    before = a[i];
    if(diff == 0) continue;
    k = min(k, diff);
  }
  k = (n - before != 0 ? min(n - before, k) : k);
  int ans = 0;
  before = 0;
  for(int i = 0; i < m; i++){
    int diff = a[i] - before - 1;
    before = a[i];
    if(diff == 0) continue;
    ans += ceil(diff / (double)k);
  }
  ans += ceil((n - before) / (double)k);
  cout << ans << endl;
}
