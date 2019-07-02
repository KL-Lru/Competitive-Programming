#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100];
int dp[100001][2]; 
// dp[number of remain stone][player id] = winner
// {player id : {First: 0, Second: 1}}
// {winner : {0: First, 1: Second, -1: unknown}}

int dfs(int stones, int player){
  if(dp[stones][player] != -1) return dp[stones][player];
  bool win = false;
  for(int i=0;i<n && (!win);i++){
    if(stones - a[i] >= 0){
      if(dfs(stones-a[i], (player+1)%2) == player)
        win = true;
    }
  }
  if(win) dp[stones][player] = player;
  else dp[stones][player] = (player+1)%2;
  return dp[stones][player];
}


int main(){
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<=k;i++){
    dp[i][0] = -1;
    dp[i][1] = -1;
  }
  for(int i=0;i<a[0];i++){
    dp[i][0] = 1;
    dp[i][1] = 0;
  }
  cout << (dfs(k, 0) == 0?"First":"Second") << endl;
}