#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int l, r;
  for(int i=0;i<s.size();i++){
    if(s[i] == 'A'){
      l = i;
      break;
    }
  }
  for(int i=0;i<s.size();i++){
    if(s[i] == 'Z'){
      r = i;
    }
  }
  cout << r-l+1 << endl;
}