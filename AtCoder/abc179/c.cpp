#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 1; i < n; i++){
    ans += n / i;
    ans -= n % i == 0 ? 1 : 0;
  }
  cout << ans << endl;
}