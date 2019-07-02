#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 100
int main(){
  int dst[4][4];
  int a,b;

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      dst[i][j] = INF;
      if(i == j) dst[i][j] = 0;
    }
  }
  for(int i = 0; i < 3; i++) {
    cin >> a >> b;
    a--;
    b--;
    dst[a][b] = 1;
    dst[b][a] = 1;
  }
  for(int k = 0; k < 4; k++) {
    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
        if(dst[i][j] > dst[i][k] + dst[k][j]){
          dst[i][j] = dst[i][k] + dst[k][j];
        }
      }
    }
  }
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      if(dst[i][j] == 3){
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" <<endl;
  return 0;
}