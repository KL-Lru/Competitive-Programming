#include<bits/stdc++.h>
using namespace std;
#define INF 1e+10
#define ll long long
int main(){
  int n, k;
  cin >> n >> k;
  ll h[n];
  ll cost[n] = {};
  for(int i=0;i<n;i++){
    cin >> h[i];
    cost[i] = INF;
  }
  cost[0] = 0;
  for(int i=0;i<n;i++){
    for(int j=1;i+j<n && j<=k;j++){
      cost[i+j] = min(abs(h[i]-h[i+j])+cost[i], cost[i+j]);
    }
  }
  cout << cost[n-1] << endl;
}
