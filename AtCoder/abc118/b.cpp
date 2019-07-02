#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,cnt = 0;
  int f[31] = {};
  cin >> n >> m;
  for(int i=0;i<n;i++){
    int k, a;
    cin >> k;
    for(int j=0;j<k;j++){
      cin >> a;
      f[a]++;
    }
  }
  for(int i=1;i<=m;i++) cnt += f[i]/n;
  cout << cnt << endl;
}