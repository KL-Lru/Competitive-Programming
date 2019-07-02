#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  bool used[2525] = {};
  cin >> s;
  int n=s.size(), cnt = 0, tcnt = 0;
  char buf = ' ';
  while(buf == ' '){
    for(int i=0;i<n;i++){
      if(used[i]) continue;
      if(buf == ' '){
        if(s[i] == '2'){
          used[i] = true;
          tcnt++;
          buf = s[i];
        }else{
          continue;
        }
      }else if(buf == s[i]){
        continue;
      }else{
        used[i] = true;
        tcnt++;
        buf = s[i];
      }
    }
    cnt++;
    if(buf == ' '){
      if(tcnt != n) cnt = -1;
      break;
    }else if(buf == '2'){
      cnt = -1;
      break;
    }else{
      if(tcnt == n) break;
      buf = ' ';
    }
  }
  cout << cnt << endl;
}