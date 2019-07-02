#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  ll a[100000], b[100000];
  ll diff[100000];
  ll cnt = 0;
  ll invsum = 0;
  cin >> n;
  for(int i=0;i<n;i++)cin >> a[i];
  for(int i=0;i<n;i++)cin >> b[i];
  for(int i=0;i<n;i++){
    diff[i] = a[i] - b[i];
    if(diff[i] < 0){
      cnt++;
      invsum += diff[i];
    }
  }
  sort(diff, diff+n, greater<ll>());
  for(int i=0;i<n;i++){
    if(invsum>=0 || diff[i] <= 0) break;
    invsum += diff[i];
    cnt++;
  }
  if(invsum < 0) cout << -1 << endl;
  else cout << cnt << endl;
}