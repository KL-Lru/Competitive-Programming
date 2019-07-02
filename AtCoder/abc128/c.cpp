#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,k,s;
  cin >> n >> m;
  vector<vector<int>> light(m);
  vector<int> p(n);
  for(int i=0;i<m;i++){
    cin >> k;
    light[i] = vector<int>(k);
    for(int j=0;j<k;j++)
      cin >> light[i][j];
  }
  for(int i=0;i<m;i++) cin >> p[i];

  int cnt = 0;
  for(int r = 0; r < (1 << n); r++){
    bitset<10> pt(r);
    for(int i=0;i<m;i++){
      int sm = 0;
      for(int j:light[i]){
        sm ^= pt[--j];
      }
      if(p[i] != sm){
        cnt --;
        break;
      }
    }
    cnt++;
  }
  cout << cnt << endl;
}