#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int t;
  cin >> s >> t;
  int hatena = 0, x = 0, y = 0;
  for(int i=0;i<s.size();i++){
    switch(s[i]){
      case 'L': x--;break;
      case 'R': x++;break;
      case 'U': y++;break;
      case 'D': y--;break;
      case '?': hatena++;break;
    }
  }
  int dst = abs(x) + abs(y);
  if(t == 1){
    cout << dst + hatena << endl;
  }else{
    if(dst < hatena)
      cout << ((hatena-dst)%2 == 1?1:0)<<endl;
    else
      cout << dst - hatena << endl;
  }
}