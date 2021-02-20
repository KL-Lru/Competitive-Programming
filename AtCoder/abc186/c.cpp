#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int ans = n;
  for(int i=1; i<= n; i++){
    int x = i;
    bool f = false;
    while(x != 0){
      if(x % 10 == 7) {
        f = true;
        break;
      }
      x /= 10;
    }
    x = i;
    while(x != 0){
      if(x % 8 == 7) {
        f = true;
        break;
      }
      x /= 8;
    }
    if (f) ans --;
  }
  cout << ans << endl;
}