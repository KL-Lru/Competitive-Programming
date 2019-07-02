#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin >> n;
  string s;
  int ans = 0;
  int a=0, b=0, ab = 0;
  for(int i=0;i<n;i++){
    cin >> s;
    for(int j=1;j<s.size();j++){
      if(s[j-1] == 'A' && s[j] == 'B') ans++;
    }
    if(s[0] == 'B' && s[s.size()-1] == 'A') ab++;
    else if(s[0] == 'B') b++;
    else if(s[s.size()-1] == 'A') a++;
  }
  if(ab >= 1){
      ans += ab - 1;
      if(ab != n){
        if(b!=0)a++;
        if(a-(b!=0?1:0)!=0)b++;
      }
  }
  ans += min(a,b);
  cout << ans << endl;
}