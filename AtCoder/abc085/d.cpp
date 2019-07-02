#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,h;
  cin >> n >> h;
  vector<int> b(n);
  int a, mx = 0, cnt = 0;
  for(int i=0;i<n;i++){
    cin >> a >> b[i];
    mx = max(a,mx);
  }
  sort(b.begin(), b.end(), greater<int>());
  for(int i=0;i<n;i++){
    if(mx < b[i]){ // 投げる
      cnt++;
      h = max(0, h - b[i]);
    }
    if(h == 0 || mx >= b[i]) break;
  }
  cout << (int)ceil(h /(double)mx) + cnt << endl;
}