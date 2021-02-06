#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  if(x < y) return gcd(y, x);
  if(y == 0) return x;
  return gcd(y, x%y);
}


int main() {
  int n;
  cin >> n;
  int a, ans;
  cin >> ans;
  for(int i = 1; i < n; i++ ){
    cin >> a;
    ans = gcd(ans, a);
  }
  cout << ans << endl;
}