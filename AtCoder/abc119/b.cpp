#include<bits/stdc++.h>
using namespace std;
const double bit =  380000.0;
int main(){
  int n;
  double x, ans = 0;
  string u;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x >> u;
    if(u == "JPY") ans += x;
    else ans += x * bit;
  }
  cout << ans << endl;
}