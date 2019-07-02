#include<bits/stdc++.h>
#include<tuple>
using namespace std;
#define ll long long
#define P pair<double, int>
int main(){
  int xs, ys, xt, yt;
  int n;
  int x[1002], y[1002], r[1002];
  vector< vector<P> > edge(1002);
  bool used[1002] = {};
  double dst[1002] ={};
  priority_queue<P, vector<P>, greater<P> > q;
  cin >> xs >> ys >> xt >> yt >> n;
  for(int i=1;i<=n;i++)
    cin >> x[i] >> y[i] >> r[i];
  x[0] = xs;
  y[0] = ys;
  r[0] = 0;
  x[n+1] = xt;
  y[n+1] = yt;
  r[n+1] = 0;
  for(int i=0;i<=n;i++)
    for(int j=1;j<=n+1;j++){
      if(i==j) continue;
      edge[i].push_back(P(max(sqrt(pow(x[j]-x[i], 2) + pow(y[j]-y[i], 2)) - (r[i] + r[j]), 0.0), j));
    }
  for(int i=0;i<edge[0].size();i++){
    q.push(edge[0][i]);
  }
  used[0] = true;
  int target;
  double distance;
  while(!q.empty()){
    tie(distance, target) = q.top();q.pop();
    if(used[target]) continue;
    used[target] = true;
    dst[target] = distance;
    if(target == n+1) break;
    for(int i=0;i<edge[target].size();i++){
      if(used[edge[target][i].second]) continue;
      int tar;
      double dis;
      tie(dis, tar) = edge[target][i];
      q.push(P(dis + distance, tar));
    }
  }
  cout << setprecision(12) << dst[target] << endl;
}