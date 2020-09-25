#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n ;
  ll ans = 0;
  int buf;
  cin >> buf;
  for(int i=1;i<n;i++){
    int a;
    cin >> a;
    ans += max(buf - a, 0);
    buf = max(buf, a);
  }
  cout << ans << endl;
}