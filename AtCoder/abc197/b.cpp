#include <bits/stdc++.h>
using namespace std;
int main() {
  int  h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<vector<char>> field(h, vector<char>(w));
  for(auto &ri: field) for(auto &ci: ri) cin >> ci;
  int ans = 1;
  x--; y--;
  int d = 1;
  while(x - d >= 0) { if(field[x - d][y] == '#') {break;} ans++; d++; }
  d = 1;
  while(x + d < h ) { if(field[x + d][y] == '#') {break;} ans++; d++; }
  d = 1;
  while(y - d >= 0 ) { if(field[x][y - d] == '#') {break;} ans++; d++;}
  d = 1;
  while(y + d < w ) { if(field[x][y + d] == '#') {break;} ans++; d++; }
  cout << ans << endl;
}