#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> v(n+1,0);
  int l,r;
  for(int i=0;i<m;i++){
    cin >> l >> r;
    v[--l]++;
    v[r]--;
  }
  for(int i=1;i<n;i++){
      v[i]+= v[i-1];
  }
  int ans = 0;
  for(int i=0;i<n;i++) ans += (v[i]==m?1:0);
  cout << ans << endl;
}