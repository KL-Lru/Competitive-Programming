#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
  int n;
  cin >> n;
  int table[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      cin >> table[i][j];
      table[i][j]--;
    }
  }
  int o[n] = {};
  int cnt = 0;
  for(int i=0;i<(n-1)*n/2;i++){
    bool used[n] ={};
    for(int dst=0;dst<n;dst++){
      if(used[dst] || o[dst] == n-1){
        continue;
      }
      int tar = table[dst][o[dst]];
      if(table[tar][o[tar]] == dst && !used[tar]){
        o[dst]++;
        o[tar]++;
        used[dst] = true;
        used[tar] = true;
      }
    } 
    cnt++;

    bool f = true, all = true;
    for(int c=0;c<n;c++){
      if(used[c]) f = false;
      if(o[c] != n-1) all = false; 
    }
    if(all) break;
    if(f) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << cnt << endl;
}