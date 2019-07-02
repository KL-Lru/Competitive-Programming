#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int h[n];
  int cost[n] = {};
  for(int i=0;i<n;i++){
    cin >> h[i];
  }
  for(int i=0;i<n;i++){
    if(i == 0) continue;
    if(i == 1) {
      cost[i] = abs(h[i-1]-h[i]);
      continue;
    }
    cost[i] = min(abs(h[i-1]-h[i])+cost[i-1], abs(h[i-2]-h[i])+cost[i-2]);
  }
  cout << cost[n-1] << endl;
}
