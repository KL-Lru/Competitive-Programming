#include<bits/stdc++.h>
using namespace std;
int main(){
  bool f[1001]={};
  f[1] = true;
  for(int i=2;i<=1000;i++){
    for(int j=2;pow(i,j)<=1000;j++){
      f[(int)pow(i,j)] = true;
    }
  }
  int n,ans = 1;
  cin >> n;
  for(int i=1;i<=n;i++){
    if(f[i])
      ans = max(ans,i);
  }
  cout << ans << endl;
}