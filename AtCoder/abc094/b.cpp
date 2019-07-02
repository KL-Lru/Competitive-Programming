#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, m, x, a, ans = 1000;
  bool c[101] = {};
  cin >> n >> m >> x;
  for(int i=0;i<m;i++){
    cin >> a;
    c[a] = true;
  }
  int sm1 = 0, sm2 = 0;
  for(int i=x;i<=n;i++) sm1 += (c[i]?1:0);
  for(int i=x;i>=0;i--) sm2 += (c[i]?1:0);
  cout << min(sm1, sm2) << endl;
}