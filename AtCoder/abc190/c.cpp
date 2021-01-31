#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  vector<pair<int,int>> cond(m);
  for(auto &ci: cond) cin >> ci.first >> ci.second;
  int k;
  cin >> k;
  vector<pair<int, int>> people(k);
  for(auto &pi: people) cin >> pi.first >> pi.second;
  const int bit_size = k;  
  int ans = 0;
  for(int i=0; i < (1 << bit_size); i++){
    vector<bool> on_bool(n + 1, false);
    for(int bit=0; bit < bit_size; bit ++){
      if((i >> bit & 1) == 0) {
        on_bool[people[bit].first] = true;
      } else {
        on_bool[people[bit].second] = true;
      }
    }
    int cnt = 0;
    for(auto &ci: cond){
      if(on_bool[ci.first] && on_bool[ci.second]) cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}