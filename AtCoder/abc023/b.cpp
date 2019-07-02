#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans = -1;
  string s;
  cin>>n>>s;
  if(n%2){
    bool f=true;
    for(int i=0;i<n/2;i++){
      if(((n-(i*2))%6)/2==0) if(!(s[i]=='b'&&s[n-i-1]=='b')) f=false;
      if(((n-(i*2))%6)/2==1) if(!(s[i]=='a'&&s[n-i-1]=='c')) f=false;
      if(((n-(i*2))%6)/2==2) if(!(s[i]=='c'&&s[n-i-1]=='a')) f=false;
    }
    if(f) ans=n/2;
  }
  cout<<ans<<endl;
  return 0;
}
