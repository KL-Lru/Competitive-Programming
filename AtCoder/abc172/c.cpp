#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n,m,k;
  cin >> n >> m >> k;
  vector<ll> suma(n+1), sumb(m+1);
  ll a, b;
  for(int i=1; i<=n; i++){
    cin >> a;
    suma[i] = a + suma[i-1];
  }
  for(int i=1; i<=m; i++){
    cin >> b;
    sumb[i] = b + sumb[i-1];
  }
  ll ans = 0;
  a = n;
  b = 0;
  while(a >= 0){
    while(suma[a] > k && a > 0) a--;
    while(suma[a] + sumb[b+1] <= k && b < m) b++;
    ans = max(a + b, ans);
    a--;
  }
  cout << ans << endl;
}