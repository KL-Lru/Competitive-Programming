#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a,b,cnt=0;
  bool mp[12][12]={};
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>a>>b;
    mp[a-1][b-1]=true;
    mp[b-1][a-1]=true;
  }
  for(int i=1;i<pow(2,12);i++){
    bool ext=false;
    bitset<12> st(i);
    for(int j=0;j<12&&!ext;j++){
      if(!st[j]) continue;
      for(int k=j+1;k<12&&!ext;k++){
        if(!st[k]) continue;
        if(!mp[j][k]) ext=true;
      }
    }
    if(!ext) cnt=max(cnt,(int)st.count());
  }
  cout<<cnt<<endl;
  return 0;
}