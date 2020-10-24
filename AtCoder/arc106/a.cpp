#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n;
  cin >> n;
  ll a = 3, b = 5;
  ll cntb = 1;
  while(b < n) {
    ll rem = n - b;
    int cnta = 0;
    while(rem % a == 0) {
      rem /= a;
      cnta++;
    }
    if(cnta > 0 && rem == 1 ) {
      cout << cnta << " " << cntb << endl;
      return 0;
    }
    cntb++;
    b *= 5;
  } 
  cout << -1 << endl;
}