#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> h(n);
  vector<int> cnt(n, 0);
  for(int i=0;i<n;i++) cin >> h[i];
  int mx = 0;
  for(int i=n-2;i>=0;i--){
    if(h[i] >= h[i+1]) cnt[i] = cnt[i+1]+1;
    mx = max(mx, cnt[i]);
  }
  cout << mx << endl;
}