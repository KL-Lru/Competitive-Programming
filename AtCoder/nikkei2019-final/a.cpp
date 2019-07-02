#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  ll a[3000];
  ll sm[3000];
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i];
  sm[0] = a[0];
  for(int i=1;i<n;i++) sm[i] = sm[i-1] + a[i];
  for(int k=0;k<n;k++){
    ll mx = 0;
    for(int i=0;i<n-k;i++){
      if(i == 0) mx = max(mx, sm[i+k]);
      else mx = max(mx, sm[i+k]-sm[i-1]);
    }
    cout << mx << endl;
  }
}