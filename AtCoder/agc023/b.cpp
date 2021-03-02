#include <bits/stdc++.h>
using namespace std;
using vc = vector<char>;
using vvc = vector<vc>;

int main() {
  int n;
  cin >> n;
  vvc field(n, vc(n));
  for(auto &row: field) for(auto &cell: row) cin >> cell;

  int cnt = 0;
  for(int i=0; i<n; i++) {
    bool ok = true;
    for(int x=0; x<n && ok; x++) {
      for(int y=x+1; y<n && ok; y++) {
        int dx = (x + i) % n, dy = y;
        int idx = (y + i) % n, idy = x;
        ok &= (field[dx][dy] == field[idx][idy]);
      }
    }
    if(ok) cnt++;
  }
  cout << cnt * n << endl;
}