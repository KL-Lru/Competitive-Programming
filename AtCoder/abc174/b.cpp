#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,d;
  int ans{};
  cin >> n >> d;
  for(int i=0; i<n; i++){
    int x,y;
    cin >> x >> y;
    if(sqrt(pow(x,2) + pow(y,2)) <= d) ans++;
  }
  cout << ans << endl;
}