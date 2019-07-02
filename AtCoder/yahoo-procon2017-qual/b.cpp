#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,k;
  ll ans = 0;
  int a[100000];
  cin >> n >> k;
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a, a+n);
  for(int i=0;i<k;i++) ans += a[i] + i;
  cout << ans << endl;
}