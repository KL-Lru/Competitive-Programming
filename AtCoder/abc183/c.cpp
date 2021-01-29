#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll count_route(ll k, ll sm, ll current_node, vector<vector<ll>> &edge,  vector<bool> &used){
  if(used[current_node] || k <= sm) return 0;
  used[current_node] = true;
  int node_size = used.size();
  int ret = 0;
  bool is_complete = true;
  for(int i=0; i<node_size; i++){
    if(!used[i]) {
      is_complete = false;
      ret += count_route(k, sm + edge[current_node][i], i, edge, used);
    }
  }
  used[current_node] = false;
  if(is_complete && sm + edge[current_node][0] == k) return 1;
  else return ret;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<ll>> t(n, vector<ll>(n));
  for(auto &row: t){
    for(auto &cell: row){
      cin >> cell;
    }
  }

  vector<bool> used(n, false);
  ll ans = count_route(k, 0, 0, t, used);
  cout << ans << endl;
}
