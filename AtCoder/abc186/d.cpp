#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(auto &ai:a) cin >> ai;
  sort(a.begin(), a.end());
  vector<ll> sm(n+1, 0);
  sm[0] = a[0];
  for(int i=1; i<n; i++){
    sm[i] = sm[i-1] + a[i];
  }
  ll ans = 0;
  for(int i=0; i<n; i++){
    ans += (sm[n-1] - sm[i]) - a[i]*(n - i - 1);
  }
  cout << ans << endl;
}