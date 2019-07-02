#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,x;
  cin >> n >> x;
  int a[n]={}, b[n]={};
  int mx = 0;
  for(int i=0;i<n;i++){
    cin >>a[i] >>b[i];
    mx = max(mx, b[i]);
  }
  int ans = 0;
  for(int i=0;i<n;i++){
    ans += a[i]*b[i];
  }
  ans += mx * x;
  cout << ans << endl;
}