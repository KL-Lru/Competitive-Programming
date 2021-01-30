#include <bits/stdc++.h>
using namespace std;
int main () {
  int n,m,t;
  cin >> n >> m >> t;
  int battery = n;
  int before = 0;
  for(int i = 0; i < m ; i ++){
    int a, b;
    cin >> a >> b;
    battery = max(0, battery - (a - before));
    if(battery == 0) {
      cout << "No" << endl;
      return 0;
    }
    battery = min(n, battery + b - a);
    before = b;
  }
  battery = max(0, battery - (t - before));
  cout << (battery > 0 ? "Yes" : "No") << endl;
}