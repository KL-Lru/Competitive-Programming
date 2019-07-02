#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,ans = 1;
  cin >> n >> m;
  for(int i=m/n;i>0;i--){
    if(m%i == 0 && m/i >= n){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}