#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int cnt=0;
  cin>>s;
  char tmp=s[0];
  for(int i=1;i<s.length();i++){
    if(tmp!=s[i]){
      cnt++;
      tmp=s[i];
    }
  }
  cout<<cnt<<endl;
  return 0;
}