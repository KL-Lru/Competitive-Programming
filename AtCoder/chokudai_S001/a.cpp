#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int mx = 0, tp;
  cin >> n ;
  for(int i=0;i<n;i++){
    cin >> tp;
    mx = max(mx, tp);
  } 
  cout << mx << endl;
}