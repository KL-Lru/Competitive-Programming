#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> d(n);
  for(auto &c: d) cin >> c.first >> c.second;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      for(int k=0; k<n; k++){
        if(i == j || j == k || k == i) continue;
        if((d[j].first - d[i].first) * (d[k].second - d[j].second) == (d[k].first - d[j].first) * (d[j].second - d[i].second)){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}