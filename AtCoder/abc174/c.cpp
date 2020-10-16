#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<bool> used(n);
  int x = 7;
  int ans = 1;
  while(x % n != 0){
    x = (x * 10 + 7) % n ;
    ans++;
    if(used[x]) {
      cout << -1 << endl;
      return 0;
    }
    used[x] = true;
  }
  cout << ans << endl;
}