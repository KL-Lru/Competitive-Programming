#include<bits/stdc++.h>
using namespace std;
const int MOD = (1e+9) +7;
int main(){
  int n,k;
  int a[101];
  /* dp[何人目][それまでに配った飴の数] = 組み合わせ総数 */
  int dp[101][100001] = {};
  dp[0][0] = 1;
  cin >> n >> k;
  for(int i=1;i<=n;i++) cin >> a[i];
  for(int i=1;i<=n;i++){
    for(int j=0;j<=k;j++){
      dp[i][j] = (j?dp[i][j-1]:0) + dp[i-1][j];
      if(j>a[i]) dp[i][j] -= dp[i-1][j-a[i]-1];
      dp[i][j] = (dp[i][j]>0?dp[i][j] % MOD: (dp[i][j] + MOD) %MOD);
    }
  }
  cout << dp[n][k] << endl;
}