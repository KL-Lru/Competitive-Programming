#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t,tt,tcst, cst=10000;
  cin >> n >> t;
  for(int i=0;i<n;i++){
    cin >> tcst >> tt;
    if(tcst < cst && tt <= t) cst = tcst;
  }
  if(cst == 10000) cout << "TLE" << endl;
  else cout << cst << endl;
}