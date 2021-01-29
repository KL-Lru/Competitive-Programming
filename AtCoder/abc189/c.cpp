#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &ai: a) cin >> ai;
  int ans = 0;
  for(int l=0; l<n; l++) {
    int mn = a[l];
    for(int r=l; r<n; r++) {
      mn = min(mn, a[r]);
      ans = max(ans, mn * (r - l + 1));
    }
  }
  cout << ans << endl;
}