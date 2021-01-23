#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, x;
  cin >> n >> x;
  double total = 0;
  x *= 100;
  for(int i = 0; i < n; i++) {
    int v, p;
    cin >> v >> p ;
    total += v * p;
    if(total > x) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
