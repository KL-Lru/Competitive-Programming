#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n, a, x[51]={};
  cin >> n >> a;
  for(int i = 0; i < n; i++) {
    cin >> x[i];
  }
  ll dp[50+1][50+1][50*50+1]={};
  dp[0][0][0] = 1;
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= n; j++) {
      for(int k = 0; k <= 50*n; k++) {
        dp[i][j][k] = dp[i-1][j][k] + (k >= x[i-1] && j >= 1?dp[i-1][j-1][k-x[i-1]]:0);
      }
    }
  }
  ll ans = 0;
  for(int i = 1; i <= n; i++) {
    ans += dp[n][i][i*a];
  }
  cout << ans << endl;
}