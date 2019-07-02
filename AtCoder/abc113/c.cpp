#include<bits/stdc++.h>
#include<sstream>
using namespace std;
#define P pair<int,int>
int main(){
  int n,m,p,y;
  cin >> n >> m;
  vector<P> v[n];
  string ans[m];
  for(int i = 0;i < m;i++){
    cin >> p >> y;
    v[p-1].push_back(P(y, i));
  }
  for(int i = 0;i < n;i++){
    sort(v[i].begin(), v[i].end());
  }
  for(int i = 0;i < n;i++){
    for(int j = 0;j < v[i].size(); j++){
      ostringstream spout, stout;
      spout << setfill('0') << setw(6) << i+1;
      stout << setfill('0') << setw(6) << j+1;
      ans[v[i][j].second] = spout.str() + stout.str();
    }
  }
  for(int i = 0;i < m;i++)
    cout << ans[i] << endl;
}