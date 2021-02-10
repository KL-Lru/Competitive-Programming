#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n ;
  vector<pair<int, int>> d(n);
  for(auto &di: d) cin >> di.first >> di.second;
  int ans = 0;
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++){
      int dx = d[i].first - d[j].first;
      int dy = d[i].second - d[j].second;
      if(abs(dy) <= abs(dx)) ans ++;
    }
  }
  cout << ans << endl;
}