#include <bits/stdc++.h>
using namespace std;
int main(){
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  cout << setprecision(12) << sx + ((sx <= gx ? 1 : -1) * abs(gx - sx) * sy / (sy + gy)) << endl;
}
