#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
  if(a < b) return gcd(b,a); // a >= b
  if(b == 0) return a;
  else return gcd(b, a%b);

}
int main(){
  int n;
  cin >> n;
  int a[n] = {};
  int l[n], r[n];
  for(int i=0;i<n;i++) cin >> a[i];

  l[0]   = a[0];
  r[n-1] = a[n-1];
  for(int i = 1  ; i <  n; i++)  l[i] = gcd(l[i-1], a[i]);
  for(int i = n-2; i >= 0; i--)  r[i] = gcd(r[i+1], a[i]);

  int ans = r[0]; // 全体gcd値

  for(int i=0;i<=n-1;i++){ // i番目を抜いた時のgcd値
    if(i == 0) ans = max(ans, r[i+1]);
    else if(i == n-1) ans = max(ans, l[i-1]);
    else ans = max(ans, gcd(l[i-1], r[i+1]));
  }
  cout << ans << endl;
}
