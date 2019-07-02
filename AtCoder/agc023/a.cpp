#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  int n;
  cin >> n;
  ll a[n+1]={};
  for(int i=1;i<=n;i++){
    cin >> a[i];
    a[i] += a[i-1];
  }
  sort(a,a+n+1);
  ll ans = 0, cnt = 0, prev = -1;
  for(int i = 0; i <= n; i++){
    if(a[i] != prev){
      if(cnt >= 2){
        ans += cnt * (cnt - 1) / 2;
      }
      cnt = 1;
      prev = a[i];
    }else{
      cnt++;
      if(i == n){
        ans += cnt * (cnt - 1) / 2;
      }
    }
  }
  cout << ans << endl;
}