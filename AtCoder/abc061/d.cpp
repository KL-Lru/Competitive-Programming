#include<bits/stdc++.h>
#include<tuple>
using namespace std;
#define ll long long
#define NMAX 1000
#define MMAX 2000
#define INF 1e+16
struct P{
  int from;
  int to;
  int cost;  
};
ll d[NMAX+1];
bool flag[NMAX+1]={};
vector<P> e;
int n, m;
int loop_cnt = 0;
ll ans;

void bellman_ford(int s){
  for(int i=1; i<=n; i++)
    d[i] = -INF;
  d[s] = 0;
  for(int l=0;l<n-1;l++){
    bool update = false;
    for(int i=0;i<m;i++){
      P edge = e[i];
      if(d[edge.from] != -INF && d[edge.to] < d[edge.from] + edge.cost){
        d[edge.to] = d[edge.from] + edge.cost;
        update = true;
      }
    }
    if(!update) break;
  }
  ans = d[n];
  for(int l=0;l<n;l++){
    bool update = false;
    for(int i=0;i<m;i++){
      P edge = e[i];
      if(d[edge.from] != -INF && d[edge.to] < d[edge.from] + edge.cost){
        d[edge.to] = d[edge.from] + edge.cost;
        flag[edge.to] = true;
        if(flag[edge.from]) flag[edge.to]=true;
      }
    }
    if(!update) break;
  }
}

int main(){
  cin >> n >> m;
  int a, b, c;
  for(int i=0; i<m; i++){
    P tp;
    cin >> tp.from >> tp.to >> tp.cost;
    e.push_back(tp);
  }
  bellman_ford(1);
  if(flag[n]) cout << "inf" << endl;
  else cout << ans << endl;
  return 0;
}