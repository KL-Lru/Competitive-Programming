#include <bits/stdc++.h>
using namespace std;
int main(){
  int s,l,r;
  cin >> s >> l >> r;
  cout << (l < s ? (s < r ? s : r) : l) << endl;
}