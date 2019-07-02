#include<bits/stdc++.h>
using namespace std;
int main(){
  int w, h, n;
  cin >> w >> h >> n;
  int lx = 0, ly = 0, rx = w, uy = h;
  int x, y, a;
  for(int i=0;i<n;i++){
    cin >> x >> y >> a;
    switch(a){
      case 1: lx = max(lx, x);break;
      case 2: rx = min(rx, x);break;
      case 3: ly = max(ly, y);break;
      case 4: uy = min(uy, y);break;
    }
  }
  cout << ((rx-lx) > 0 && (uy-ly) > 0?(rx-lx)*(uy-ly):0)<< endl;
}