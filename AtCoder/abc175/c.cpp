#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll x,k,d;
  cin >> x >> k >> d;
  ll mv = abs(x) / d;
  if(mv >= k) {
    cout << abs(abs(x) - k * d) << endl;
  } else {
    k -= mv;
    x = abs(abs(x) -  mv * d);
    if(k%2) {
      cout << abs(x - d) << endl;
    } else {
      cout << x << endl;
    }
  }
}