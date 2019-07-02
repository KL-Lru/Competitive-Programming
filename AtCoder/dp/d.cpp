#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n, W;
  cin >> n >> W;
  int w[n], v[n];
  for(int i = 0; i < n; i++){
    cin >> w[i] >> v[i];
  }
  ll dp[W+1] = {};
  for(int i = 0; i < n; i++){
    for(int j = W - w[i]; j >= 0; j--){
      dp[j+w[i]] = max(dp[j] + v[i], dp[j+w[i]]);
    }
  }
  ll ans = 0;
  for(int i = 0; i <= W; i++){
    ans = max(ans, dp[i]);
  }
  cout << ans << endl;
}