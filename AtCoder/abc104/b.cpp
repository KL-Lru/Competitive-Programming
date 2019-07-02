#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  bool ans = true, dep = false;
  cin >> s;
  if(s[0] != 'A') ans = false;
  for(int i=1;i<s.size();i++){
    if(s[i] == 'C'){
      if(i == 1 || i == s.size()-1) ans = false;
      if(dep) ans = false;
      else dep = true;
    }
    else if(s[i] >= 'A' && 'Z' >= s[i]) ans = false;
  }
  cout << ((ans && dep)?"AC":"WA") << endl;
}