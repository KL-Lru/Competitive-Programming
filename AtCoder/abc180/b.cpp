#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n;
  cin >> n;
  ll x;
  ll m{}, e{}, c{}; 
  for(int i=0; i<n; i++) {
    cin >> x;
    m += abs(x);
    e += x*x;
    c = max(c, abs(x));
  }
  cout << setprecision(12) << m << endl << sqrt(e) << endl << c << endl;
}