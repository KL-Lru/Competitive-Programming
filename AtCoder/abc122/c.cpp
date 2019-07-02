#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, q;
  string s;
  cin >> n >> q >> s;
  int suml[n+1] = {};
  for(int i=1;i<n;i++){
    suml[i] = suml[i-1];
    if(s[i-1] == 'A' && s[i] == 'C'){
      suml[i]++;
    }
  }
  int l,r;
  for(int i=0;i<q;i++){
    cin >> l >> r;
    cout << suml[--r] - suml[--l] << endl;
  }
}
