#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  double p[3000];
  double dp[3000] = {};
  dp[0] = 1;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> p[i];
  }
  for(int i=0; i<n; i++){
    for(int j=i; j>=0; j--){
      dp[j+1] += dp[j] * p[i];
      dp[j] *= (1-p[i]);
    }
  }
  double sm = 0;
  for(int i=ceil(n/2.0);i<=n;i++){
	sm += dp[i];    
  }
  cout << setprecision(12) << sm << endl;
}