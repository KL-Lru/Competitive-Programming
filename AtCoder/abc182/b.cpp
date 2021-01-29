#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &x: a) cin >> x;
  int ans = 0, mcount = 0;
  for(int i=2; i<=1000; i++){
    int cnt = 0;
    for(auto x: a) cnt += (x % i ? 0 : 1);
    if(mcount < cnt){
      mcount = cnt;
      ans = i;
    }
  }
  cout << ans << endl;
}