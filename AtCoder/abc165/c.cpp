#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,q;
  cin >> n >> m >> q;
  vector<int> a(q), b(q), c(q), d(q);
  for(int i=0; i<q; i++){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--; b[i]--;
  }
  int ans = 0;
  vector<int> val(n, 1);
  while(val[0] <= m){
    int cals = 0;
    for(int i=0; i<q; i++){
      if(val[b[i]] - val[a[i]] == c[i]) cals += d[i];  
    }
    ans = max(ans, cals);
    val[n-1]++;
    for(int i=n-1;i>0;i--){
      if(val[i] == m+1){
        val[i-1] ++;
        val[i] = 0;
      }
    }
    for(int i=1;i<n;i++){
      if(val[i] == 0){
        val[i] = val[i-1];
      }
    }

  }
  cout << ans << endl;
}