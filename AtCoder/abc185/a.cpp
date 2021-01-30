#include <bits/stdc++.h>
using namespace std;
int main(){
  int ans = 1000, a;
  for(int i = 0; i < 4; i ++){
    cin >> a;
    ans = min(ans, a);
  }
  cout << ans << endl;
}
