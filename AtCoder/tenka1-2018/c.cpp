#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin >> n;
  ll a[n], b[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a,a+n);
  sort(b,b+n, greater<int>());
  ll ans = abs(a[0]-b[0]);
  for(int i=1;i<n/2;i++){
    ans += abs(a[i-1]-b[i])+ abs(b[i-1]-a[i]);
  }
  if (n % 2 == 1){
    ans += max(abs(a[n/2-1]-b[n/2]),abs(b[n/2-1]-a[n/2]));
  }
  cout << ans << endl;
}