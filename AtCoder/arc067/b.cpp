#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n, a, b, x, buf;
  ll ans = 0;
  cin >> n >> a >> b >> buf;
  for(int i=1;i<n;i++){
    cin >> x;
    ans += min(a*(x-buf), b);
    buf = x;
  }
  cout << ans << endl;
}