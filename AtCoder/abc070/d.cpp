#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>
#define ll long long
int main(){
  int n;
  cin >> n;
  vector<P> v[n];
  bool used[n]={};
  ll dst[n]={};
  queue<int> qu;
  int a,b,c;
  for(int i=0;i<n-1;i++){
    cin >> a >> b >> c;
    a--;b--;
    v[a].push_back(P(b,c));
    v[b].push_back(P(a,c));
  }
  int q,k;
  cin >> q >> k;
  k--;
  qu.push(k);
  used[k] = true;
  while(!qu.empty()){
    int tp = qu.front();
    qu.pop();
    for(int i=0;i<v[tp].size();i++){
      P next = v[tp][i];
      if(!used[next.first]){
        dst[next.first] = dst[tp] + next.second;
        used[next.first] = true;
        qu.push(next.first);
      }
    }
  }
  int x,y;
  for(int i=0;i<q;i++){
    cin >> x >> y;
    x--;y--;
    cout << dst[x] + dst[y] << endl;
  }
}