#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n;
  cin >> s;
  int r = 0, b = 0;
  for(int i=0;i<n;i++){
    if(s[i] == 'R') r++;
    else b++;
  }
  cout << (r > b ? "Yes" : "No") << endl;
}