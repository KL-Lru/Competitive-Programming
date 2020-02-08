#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int ans = -1, tp;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> tp;
    ans = (tp == 1?i+1:ans);
  } 
  cout << ans << endl;
}