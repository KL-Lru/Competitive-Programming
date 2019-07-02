#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  int x[n] = {};
  int ans = 1e+9;
  for(int i=0;i<n;i++) cin >> x[i];
  for(int i=0;i+k-1<n;i++){
    ans = min(ans, 
      ((abs(x[i]) == x[i]) == (abs(x[i+k-1]) == x[i+k-1])?
        max(abs(x[i]),abs(x[i+k-1])):
        x[i+k-1] - x[i] + min(abs(x[i]),abs(x[i+k-1]))));
  }
  cout << ans << endl;
}