#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,x,a[100001] = {};
  cin >> n >> x;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  ll cnt = 0;
  for(int i = 0; i < n-1; i++){
    ll sum = a[i] + a[i+1];
    ll crr = 0;
    if(sum > x) {
      crr = sum - x;
      if(a[i+1] >= crr){
        a[i+1] -= crr;
      }else{
        a[i] -= crr-a[i+1];
        a[i+1] = 0;
      }
      cnt += crr;
    }
  }
  cout << cnt << endl;
}