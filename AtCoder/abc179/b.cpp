#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int ans = 0, cnt = 0, a, b;
  for(int i=0; i<n; i++){
    cin >> a >> b;
    if(a == b) cnt++;
    else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  cout << ((ans >= 3 || cnt >= 3) ? "Yes":"No") << endl;
}