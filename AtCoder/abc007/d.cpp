#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll restrict_count(ll x){
  // dp[small or exact][bit][contain 4 or 9 / not contain]
  vector<vector<vector<ll>>> dp(2, vector<vector<ll>>(20, vector<ll>(2)));
  stack<int> num_s;
  if(x == 0) return 0;
  while(x > 0) {
    num_s.push(x%10);
    x /= 10;
  }
  ll MAX_DEGIT = num_s.size();
  for(int i = 0; i < MAX_DEGIT; i++){
    int top = num_s.top(); num_s.pop();
    for(int j=0; j<10; j++){
      if( i == 0 ){
        if(j < top){
          dp[0][i][j == 4 || j == 9 ? 1 : 0]++;
        } else if(j == top){
          dp[1][i][j == 4 || j == 9 ? 1 : 0]++;
        }
      } else {
        if(j < top) {
          if(j == 4 || j == 9) {
            dp[0][i][1] += dp[0][i-1][0] + dp[1][i-1][0] + dp[0][i-1][1] + dp[1][i-1][1];
          } else {
            dp[0][i][0] += dp[0][i-1][0] + dp[1][i-1][0];
            dp[0][i][1] += dp[0][i-1][1] + dp[1][i-1][1];
          }
        } else if(j == top) {
          if(j == 4 || j == 9) {
            dp[1][i][1] += dp[1][i-1][1] + dp[1][i-1][0];
            dp[0][i][1] += dp[0][i-1][1] + dp[0][i-1][0];
          } else {
            dp[0][i][0] += dp[0][i-1][0];
            dp[0][i][1] += dp[0][i-1][1];
            dp[1][i][0] += dp[1][i-1][0];
            dp[1][i][1] += dp[1][i-1][1];
          }
        } else {
          if(j == 4 || j == 9) {
            dp[0][i][1] += dp[0][i-1][0] + dp[0][i-1][1];
          } else {
            dp[0][i][0] += dp[0][i-1][0];
            dp[0][i][1] += dp[0][i-1][1];
          }
        }
      }
    }
  }
  return dp[0][MAX_DEGIT-1][1] + dp[1][MAX_DEGIT-1][1];
}

int main(){
  ll a, b;
  cin >> a >> b ;
  cout << restrict_count(b) - restrict_count(a-1) << endl;
}