#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, l, r, a;
  cin >> n >> l >> r;
  for(int i=0;i<n;i++){
    cin >> a;
    cout << (min(max(a, l), r)) << " ";
  }
  cout << endl;
}