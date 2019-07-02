#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin >> n;
  vector<ll> a(3*n);
  ll ans = 0;
  for(int i=0;i<3*n;i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<ll>());
  for(int i=0;i<n;i++)ans += a[2*i+1];
  cout << ans << endl;
}