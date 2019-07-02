#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  long long ans = 0, n = s.size();
  for(int i=0;i<n;i++){
	ans += (n-1) + (s[i]=='U'?i:(n-(i+1)));
  }
  cout << ans << endl;
}