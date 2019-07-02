#include<bits/stdc++.h>
using namespace std;
int dp[100000] = {};
vector<int> edge[100000];

int calc(int tar){
  if(dp[tar] > 0) return dp[tar];
  for(int i: edge[tar]){
    dp[tar] = max(dp[tar], calc(i) + 1);
  }
  return dp[tar];
}

int main(){
  int n,m;
  cin >> n >> m;
  int x,y;
  for(int i=0;i<m;i++){
    cin >> x >> y;
    edge[--x].push_back(--y);
  }
  int mx = 0;
  for(int i=0;i<n;i++){
    calc(i);
    mx = max(mx, dp[i]);
  }
  cout << mx << endl;
}