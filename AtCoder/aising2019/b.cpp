#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int a,b;
  int p;
  int cnt[3] = {};
  cin >> n >> a >> b;
  for(int i=0;i<n;i++){
    cin >> p;
    if(p <= a) cnt[0]++;
    else if(p >= b+1) cnt[2]++;
    else cnt[1]++;
  }
  int ans = 100000;
  for(int i=0;i<3;i++) ans = min(ans,cnt[i]);
  cout << ans << endl;
}