#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll x,y,a,b;
  cin >> x >> y >> a >> b;
  ll ans = 0;
  while(x < b / (a-1) && x < y / a) {
    ans ++;
    x *= a;
  }
  ans += (y - 1 - x)/b;
  cout << ans << endl;
}