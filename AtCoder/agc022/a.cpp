#include<bits/stdc++.h>
using namespace std;
int main(){
  bool f[27]={},act;
  string s;
  char m='z'+1,n='z'+1;
  cin>>s;
  if(s.length()!=26){
    for(int i=0;i<s.length();i++){
      f[s[i]-97]=true;
    }
    for(int i=0;i<26;i++){
      if(!f[i]){m=i+97;break;}
    }
    cout<<s<<m<<endl;
    return 0;
  }else{
    for(int i=s.length()-1;i>=0;i--){
      act=false;
      f[s[i]-97]=true;
      for(int j=s[i]-97+1;j<26;j++){
        if(f[j]) {
          m=j+97;
          act=true;
          break;
        }
      }
      if(act) {
        for(int j=0;j<i;j++){
          cout<<s[j];
        }
        cout<<m<<endl;
        return 0;
      }
    }
  }
  cout<<-1<<endl;
  return 0;
}