#include <bits/stdc++.h>
using namespace std;
int main(){
  int sx, sy, gx, gy;
  cin >> sx >> sy;
  cin >> gx >> gy;
  int ans = 0;
  if(sx != gx || sy != gy) {
    ans = 3;
    for(int x=-3; x<=3; x++){
      for(int y=-3; y<=3; y++){
        int cnt = (x == 0 && y == 0 ? 0 : 1);
        int dx = sx + x;
        int dy = sy + y;
        if(dx == gx && dy == gy) cnt += 0;
        else if(abs(gx - dx) == abs(gy - dy) || abs(gx - dx) + abs(gy - dy) <= 3 ) cnt += 1;
        else if(abs(gx - dx)%2 == abs(gy - dy)%2) cnt += 2;
        else cnt += 3;
        ans = min(ans, cnt);
      }
    }
  }
  cout << ans << endl;
}