#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,c;
  int b[20], a, sm, cnt = 0;
  cin >> n >> m >> c;
  for(int i=0;i<m;i++) cin >> b[i];
  for(int i=0;i<n;i++){
    sm = c;
    for(int j=0;j<m;j++){
      cin >> a;
      sm += a * b[j];
    }
    if(sm > 0) cnt++;
  }
  cout << cnt << endl;
}