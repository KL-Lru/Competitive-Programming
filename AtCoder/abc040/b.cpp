#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int ans = 100000000;
  cin >> n;
  for(int x=1;x<=n;x++){
    int y = n/x;
    if(x > y) break;
    ans = min(ans, y-x + (n - (y*x)));
  }
  cout << ans << endl;
}