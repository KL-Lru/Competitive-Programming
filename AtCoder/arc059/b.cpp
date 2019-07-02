#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  char rev[2];
  cin >> s;
  int n = s.size();
  rev[0] = s[0];
  rev[1] = s[1];
  if( rev[0] == rev[1]){
    cout << 1 << " " << 2 <<endl;
    return 0;
  }

  for(int i = 2; i < n; i++){
    if( rev[0] == s[i] || rev[1] == s[i]){
      cout << i-1 << " " << i+1 <<endl;
      return 0;
    }
    rev[0] = rev[1];
    rev[1] = s[i];
  }
  cout << "-1 -1" << endl;
}