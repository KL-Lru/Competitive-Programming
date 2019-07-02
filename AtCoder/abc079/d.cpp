#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w,sm = 0,a;
  int d[10][10];
  cin >> h >> w;
  for(int x=0;x<10;x++){
    for(int y=0;y<10;y++){
      cin >> d[x][y];
    }
  }
  for(int k=0;k<10;k++)
    for(int i=0;i<10;i++)
      for(int j=0;j<10;j++)
        if(d[i][j] > d[i][k] + d[k][j]) 
          d[i][j] = d[i][k] + d[k][j];
  for(int x=0;x<h;x++){
    for(int y=0;y<w;y++){
      cin >> a;
      if(a == -1) continue;
      sm += d[a][1];
    }
  }
  cout << sm << endl;
}