#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<char>> field(h, vector<char>(w));
  vector<vector<bool>> used(h, vector<bool>(w, false));
  unordered_map<char, vector<pair<int, int>>> edge; 
  for(int x = 0; x < h; x++){
    for(int y = 0; y < w; y++){
      cin >> field[x][y];
      if(field[x][y] != '#' && field[x][y] != '.')
        edge[field[x][y]].push_back({x, y});
    }
  }

  queue<pair<pair<int,int>,int>> q;
  pair<int, int> start = edge['S'][0];
  pair<int, int> end = edge['G'][0];
  q.push({{start.first, start.second}, 0});
  while(!q.empty()){
    int x, y, depth;
    pair<int,int> dir;
    tie(dir, depth) = q.front(); q.pop();
    x = dir.first; y = dir.second;
    if(used[x][y]) continue;
    used[x][y] = true;
    if(x == end.first && y == end.second) {
      cout << depth << endl;
      return 0;
    }
    if('a' <= field[x][y] && field[x][y] <= 'z'){
      for(auto e: edge[field[x][y]]){
        if(x == e.first && y == e.second ) continue;
        if(used[e.first][e.second]) continue;
        q.push({{e.first, e.second}, depth + 1});
      }
      edge[field[x][y]] = vector<pair<int, int>>();
    }
    for(int i = 0; i < 4; i++){
      if(x + dx[i] < 0 || x + dx[i] >= h) continue;
      if(y + dy[i] < 0 || y + dy[i] >= w) continue;
      if(field[x + dx[i]][y + dy[i]] == '#' ) continue;
      if(used[x + dx[i]][y + dy[i]]) continue;
      q.push({{x + dx[i], y + dy[i]}, depth + 1});
    }
  }
  cout << -1 << endl;
  return 0;
}