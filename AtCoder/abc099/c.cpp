#include<bits/stdc++.h>
using namespace std;
#define N 100000
#define INF 1e+9
int dp[N+1];

int main(){
  int n;
  cin >> n;
  for(int i=0;i<N+1;i++)
    dp[i] = INF;
  dp[0] = 0;
  for(int i=0;i<=n;i++){
    dp[i+1] = min(dp[i] + 1, dp[i+1]);
    int p = 6;
    while(i+p<=n){
      dp[i+p] = min(dp[i] + 1, dp[i+p]);
      p *= 6;
    }
    p = 9;
    while(i+p<=n){
      dp[i+p] = min(dp[i] + 1, dp[i+p]);
      p *= 9;
    }
  }
  cout << dp[n] << endl;
}
