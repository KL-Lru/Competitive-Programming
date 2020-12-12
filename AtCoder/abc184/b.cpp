#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, x;
  string s;
  cin >> n >> x;
  cin >> s;
  for(int i=0; i<n; i++){
    x = max(0, x + (s[i] == 'o' ? 1 : -1));
  }
  cout << x << endl;
}