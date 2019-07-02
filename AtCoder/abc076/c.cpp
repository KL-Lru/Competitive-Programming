#include<bits/stdc++.h>
using namespace std;

int main(){
  string s,t; 
  cin>>s>>t;
  int sn=s.length(),tn=t.length();
  bool f=true;
  for(int i=sn-tn;i>=0;i--){
    bool accept=false;
    for(int j=i;j<i+tn;j++){
      if(s[j]!=t[j-i]&&s[j]!='?') break;
      if(j==i+tn-1) accept=true;
    }
    if(accept){
      f=false;
      for(int j=i;j<i+tn;j++){
        s[j]=t[j-i];
      }
      for(int j=0;j<sn;j++) if(s[j]=='?')s[j]='a';
      cout<<s<<endl;
      break;
    }
  }
  if(f) cout<<"UNRESTORABLE"<<endl;
  return 0;
}
