#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  ll ans = 0;
  ll a, b;
  for(int i=0; i<n; i++){
    cin >> a >> b;
    ans += ((b+1) * b / 2) - (a * (a-1) / 2);
  }
  cout << ans << endl;
}