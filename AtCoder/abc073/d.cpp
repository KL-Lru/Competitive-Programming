#include<bits/stdc++.h>
#define ll long long
const ll INF = 1e+9;
using namespace std;

int main(){
  ll field[201][201];
  ll n, m, r, tp;

  cin >> n >> m >> r;
  vector<ll> pos(r);
  vector<bool> used(r, false);

  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(i!=j)
        field[i][j] = INF;
      else
        field[i][j] = 0;
    }
  }
  for(int i=0;i<r;i++){
    cin >> tp;
    pos[i] = --tp;
  }

  ll a,b,c;
  for(int i=0;i<m;i++){
    cin >> a >> b >> c;
    a--;b--;
    field[a][b] = c;
    field[b][a] = c;
  }

  // WF
  for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        field[i][j] = min(field[i][j], field[i][k] + field[k][j]);
  
  sort(pos.begin(), pos.end());
  ll ans = INF;
  do{
    tp = 0;
    for(int i=1;i<r;i++){
      tp += field[pos[i-1]][pos[i]];
    }
    ans = min(ans, tp);
  }while(next_permutation(pos.begin(), pos.end()));
  cout << ans << endl;
}