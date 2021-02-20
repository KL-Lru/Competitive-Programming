#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX_MI = 2e+9;
int main(){
  ll n;
  cin >> n;
  ll lp = 1, rp = MAX_MI;
  while(rp - lp > 1){
    ll mid = (rp + lp) / 2;
    ll sm = mid * (mid + 1) / 2;
    if(sm <= n+1){
      lp = mid;
    } else {
      rp = mid;
    }
  }
  cout << (n - lp + 1) << endl;
}
