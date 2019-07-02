#include<bits/stdc++.h>
using namespace std;
int main(){
  string s, t = "753";
  cin >> s;
  int ans = 1e+9;
  for(int i=0;i<=s.size()-3;i++){
    int tp = 0;
    for(int j=0;j<3;j++){
      tp += (s[i+j]-t[j])*pow(10,2-j);
    }
    ans = min(ans,abs(tp));
  }
  cout << ans << endl;
}
