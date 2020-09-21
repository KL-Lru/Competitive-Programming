#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n ;
  int ans{};
  int a;
  for(int i=1; i<=n; i++){
    cin >> a;
    if(i%2 != 1) continue;
    if(a%2 == 1) ans++;
  }
  cout << ans << endl;
}