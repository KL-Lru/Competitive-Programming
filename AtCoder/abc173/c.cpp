#include <bits/stdc++.h>
using namespace std;
int main(){
  int h,w,k;
  cin >> h >> w >> k;
  vector<vector<char>> field(h, vector<char>(w));
  for(auto &row:field){
    for(auto &cell:row){
      cin >> cell;
    }
  }
  int xpat = 0;
  int xlim = pow(2, h);
  int ans = 0;
  while(xpat < xlim){
    vector<bool> xp(h);
    int x = xpat;
    for(int i=0;i<h;i++){
      xp[i] = x%2;
      x/=2;
    }
    int ypat = 0;
    int ylim = pow(2, w);
    while(ypat < ylim){
      vector<bool> yp(w);
      int y = ypat;
      for(int i=0;i<w;i++){
        yp[i] = y%2;
        y/=2;
      }
      int cnt = 0;
      for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
          if(xp[i] || yp[j]) continue;
          if(field[i][j] == '#') cnt++;
        }
      }
      if(cnt == k) ans++;
      ypat++;
    }
    xpat++;
  }
  cout << ans << endl;
}