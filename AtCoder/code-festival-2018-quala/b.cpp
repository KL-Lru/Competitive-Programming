#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a,b, l,r;
  bool vl[100]={};
  cin >> n >> m >> a >> b;
  for(int i=0;i<m;i++){
    cin >> l >> r;
    for(int j=--l; j<r; j++) vl[j] = true;
  }
  int sm = 0;
  for(int i=0;i<n;i++)
    sm += vl[i]?a:b;
  cout << sm << endl;
}