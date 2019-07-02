#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>());
  bool used[n][3] = {};
  int f,t;

  for(int i=0;i<m;i++){
    cin >> f >> t;
    v[--f].push_back(--t);    
  }
  int start, end;
  cin >> start >> end;
  start--;end--;
  queue<P> q;
  q.push(make_pair(start, 0));
  while(!q.empty()){
    ll dst, cost;
    tie(dst, cost) = q.front();
    q.pop();
    if(dst == end && cost %3 == 0){
      cout << cost / 3 << endl;
      return 0;
    }
    if(used[dst][cost%3]) continue;
    used[dst][cost%3] = true;
    for(auto to: v[dst]){
      if(used[to][(cost+1)%3]) continue;
      q.push(make_pair(to, cost+1));
    }
  }
  cout << -1 << endl;
}