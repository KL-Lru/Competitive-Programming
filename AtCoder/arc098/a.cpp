#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n >> s;
  int sw = 0, se = 0;
  for(int i=1; i<n; i++)
    if(s[i] == 'E') se++;
  int ans = se;
  for(int i=1; i<n; i++){
    if(s[i-1] == 'W') sw++;
    if(s[i] == 'E') se--;
    ans = min(ans, se+sw); 
  }
  cout << ans << endl;
}