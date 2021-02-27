#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int t=1; t<=n; t++){
    string s, ts;
    cin >> s;
    int nest = 0;
    for(int i=0; i<s.size(); i++){
      while(nest < s[i] - '0'){
        ts += '(';
        nest ++;
      }
      while(nest > s[i] - '0') {
        ts += ')';
        nest --;
      }
      ts += s[i];
    }
    while(nest > 0) {
      ts += ')';
      nest --;
    }
    cout << "Case #" << t << ": " << ts << endl;
  }
}