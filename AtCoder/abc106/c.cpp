#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string s;
  ll k,nop;
  cin>>s>>k;
  for(nop=0;nop < s.size();nop++)
    if(s[nop]=='1')
      continue;
    else
      break;
  if(nop == s.size()){
    cout<<1<<endl;
    return 0;
  } // 全部1
  if(k <= nop) cout<<1<<endl;
  else cout<<s[nop]<<endl;
  return 0;
}