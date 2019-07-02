#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int cnt['z'-'a'+1]={};
  ll mx = 0;
  ll ans = 0;
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    cnt[s[i]-'a']++;
  }
  for(int i=0;i<'z'-'a'+1;i++){
	mx += cnt[i] - cnt[i]%2;
    cnt[i] = cnt[i]%2;
  }
  bool add_flag = false;
  for(int i=0;i<'z'-'a'+1;i++){
    if(cnt[i] > 0 && !add_flag){
      mx ++;
      cnt[i]--;
      add_flag = true;
    }
    ans += cnt[i];
  }
  ans += mx * mx;
  cout << ans << endl;
}
