#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define INF 1e+9
ll dp[2001][1000];
/* dp[今見ている位置+1000][残ってる石の数] = 最小コスト */
int r,g,b,sm;

int w(int p,int rem){
  if(rem <= 0) return 0;
  if(sm-rem < r) return abs(p+100);
  if(sm-rem < r+g) return abs(p);
  return abs(p-100);
}

int solve(int p, int rem){
  if(1000-p < rem) return INF;
  if(dp[p+1000][rem] != INF) return dp[p+1000][rem];
  if(rem <= 0){
    dp[p+1000][rem]=0;
    return dp[p+1000][rem];
  }
  /* 位置pに石を置くのと置かないのとを計算 */
  dp[p+1000][rem] = min(solve(p+1,rem), solve(p+1, rem-1) + w(p, rem));
  return dp[p+1000][rem];
}

int main(){
  for(int i = 0; i < 2001; i++){
    for(int j = 0; j < 1000; j++){
      dp[i][j] = INF; 
    }
  }
  cin>>r>>g>>b;
  sm=r+g+b;
  cout << solve(-1000, sm) << endl;;
}