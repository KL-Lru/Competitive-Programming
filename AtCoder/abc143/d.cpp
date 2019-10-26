#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<int> l(n);
  for(int i=0;i<n;i++) cin >> l[i];
  sort(l.begin(), l.end());
  ll ans {};
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      ans += distance(l.begin() + j, lower_bound(l.begin(), l.end(), l[i] + l[j])) -1;
    }
  }
  cout << ans << endl;
}

