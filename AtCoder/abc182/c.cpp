#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n;
  cin >> n;
  int x[3] = {};
  int d = 0, sm = 0;
  while(n > 0){
    x[(n%10)%3]++;
    sm += n%10;
    n/=10;
    d++;
  }
  sm %= 3;
  if(sm == 0) cout << 0 << endl;
  else {
    if(d > 1 && ((sm == 1 && x[1] > 0) || (sm == 2 && x[2] > 0))) cout << 1 << endl;
    else if (d > 2) cout << 2 << endl;
    else cout << -1 << endl;
  }
}