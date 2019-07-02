#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int l = 0,r = 0;
  int ans = 0;
  while(r < s.size()){
    if(s[r] == 'A' || s[r] == 'C' || s[r] == 'G' || s[r] == 'T'){
      r++;
      ans = max(ans, r-l);
    }else{
      r++;
      l = r;
    }
  }
  cout << ans << endl;
}
