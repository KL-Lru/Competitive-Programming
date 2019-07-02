#include<bits/stdc++.h>
using namespace std;
int c[101][101] = {{0}};
bool b[101][101];

int main(){
  int n, cx=0, cy=0, H = 0;
  int x,y,h;
  bool first = true;
  vector<int> xv(0),yv(0),hv(0);
  for(int i = 0;i<101;i++){
    for(int j = 0;j<101;j++){
      b[i][j] = true;
    }
  }
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> x >> y >> h;
    if(h == 0){
      xv.push_back(x);
      yv.push_back(y);
      hv.push_back(h);
      continue;
    }
    if(first){
      c[x][y] = h;
      for(int ti = 0; ti < 101; ti++){
        for(int tj = 0; tj < 101; tj++){
          c[ti][tj] = h + abs(ti-x) + abs(tj-y);
        }
      }
      first = false;
    }else{
      for(int ti = 0; ti < 101; ti++){
        for(int tj = 0; tj < 101; tj++){
          if(c[ti][tj] != h + abs(ti-x) + abs(tj-y))
            b[ti][tj] = false;
        }
      }
    }
  }
  for(int i = 0; i< xv.size();i++){
    x = xv[i];y=yv[i];h=hv[i];
    for(int ti = 0; ti < 101; ti++){
      for(int tj = 0; tj < 101; tj++){
        if(c[ti][tj] - abs(ti-x) - abs(tj-y) > 0)
          b[ti][tj] = false;
      }
    }
  }
  for(int i = 0;i<101;i++){
    for(int j = 0;j<101;j++){
      if(b[i][j] && H < c[i][j]){
        cx = i;cy = j;H = c[i][j];
      }
    }
  }
  cout << cx << " " << cy << " " << H << endl;
}