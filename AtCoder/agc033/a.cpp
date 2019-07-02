#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int x;
    int y;
    int d;
    node(int x, int y, int d): x(x), y(y), d(d) {}
};

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
  int h,w;
  cin >> h >> w;
  char a[h][w];
  bool f[h][w] = {};
  for(int x=0;x<h;x++)
    for(int y=0;y<w;y++)
      cin >> a[x][y];

  queue<node> q;
  for(int x=0;x<h;x++)
    for(int y=0;y<w;y++)
      if(a[x][y] == '#')
        q.push(node(x,y,0));
  int ans = 0;
  while(!q.empty()){
    node cur = q.front();q.pop();
    if(f[cur.x][cur.y]) continue;
    ans = max(ans, cur.d);
    f[cur.x][cur.y] = true;
    for(int i=0;i<4;i++){
      int nx = cur.x + dx[i], ny = cur.y + dy[i];
      if(f[nx][ny] || nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
      q.push(node(nx, ny, cur.d + 1));
    }
  }
  cout << ans << endl;
}
