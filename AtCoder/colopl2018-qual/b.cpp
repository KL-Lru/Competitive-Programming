#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, x, t, sm = 0;
  string s;
  cin >> n >> x >> s;
  for(int i=0;i<n;i++){
    cin >> t;
    if(t > x && s[i] == '1') sm += x;
    else sm += t;
  }
  cout << sm << endl;
}