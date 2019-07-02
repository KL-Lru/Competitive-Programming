#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>
int main(){
  int n,m,ans=0;
  vector<P> req(100000);
  cin >> n >> m;
  int dep = n;
  for(int i=0;i<m;i++){
    cin >> req[i].first >> req[i].second;
  }
  sort(req.begin(), req.end(), greater<P>());
  for(int i=0;i<m;i++){
    if(req[i].second > dep) continue;
    ans++;
    dep = req[i].first;
  }
  cout << ans << endl;
}