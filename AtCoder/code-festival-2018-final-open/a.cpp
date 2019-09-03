#include<bits/stdc++.h>
using namespace std;
using P = pair<int,int>;
using pv = vector<P>;
int main(){
  int n,m;
  cin >> n >> m;
  vector<pv> edge(n, pv());
  int a,b,l;
  for(int i=0;i<m;i++){
    cin >> a >> b >> l;
    a--;b--;
    edge[a].push_back(make_pair(l,b));
    edge[b].push_back(make_pair(l,a));
  }
  for(int i=0;i<n;i++){
    sort(edge[i].begin(), edge[i].end());
  }
  int cnt = 0;
  for(int i=0;i<n;i++){
    for(auto e1: edge[i]){
      auto start = lower_bound(edge[e1.second].begin(), edge[e1.second].end(), make_pair(2540 - e1.first, -1));
      auto end = upper_bound(edge[e1.second].begin(), edge[e1.second].end(), make_pair(2540 - e1.first, n));

      for(auto ei2 = start; ei2 != end; ei2++){
        if((*ei2).second <= i) continue;
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}