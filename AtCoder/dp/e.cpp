#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VMAX 100000
int main(){
  int n, W;
  cin >> n >> W;
  ll w[n], v[n];
  ll sum = 0;
  for(int i = 0; i < n; i++){
    cin >> w[i] >> v[i];
    sum += w[i];
  }
  ll dp[VMAX+10] = {};
  for(int i = 0; i <= VMAX; i++)
    dp[i] = sum+1000;
  dp[0] = 0;
  for(int i = 0; i < n; i++){
    for(int j = VMAX; j >= 0; j--){
      if(j-v[i]<=0) // 価値が今見てるのだけで達成出来る時
        dp[j] = min(w[i], dp[j]);
      else{
        if(dp[j-v[i]] == sum+1000) continue;
        dp[j] = min(dp[j-v[i]] + w[i], dp[j]);
      }
    }
  }
  ll ans = 0;
  for(int i = 0; i <= VMAX; i++){
    if(dp[i] <= W && dp[i] != sum + 1000)
      ans = i;
  }
  cout << ans << endl;
}