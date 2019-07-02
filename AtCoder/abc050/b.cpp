#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int t[101];
  int sm = 0;
  int m, p, x;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> t[i];
    sm += t[i];
  }
  cin >> m;
  for(int i=0;i<m;i++){
    cin >> p >> x;
    cout << sm+(x-t[p]) << endl;
  }
}