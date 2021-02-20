#include <bits/stdc++.h>
using namespace std;
int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  int mn = 1000;
  for(int x=0; x<h; x++){
    for(int y=0; y<w; y++){
      cin >> a[x][y];
      mn = min(mn, a[x][y]);
    }
  }
  int ans = 0;
  for(int x=0; x<h; x++){
    for(int y=0; y<w; y++){
      ans += a[x][y] - mn;
    }
  }
  cout << ans << endl;

}