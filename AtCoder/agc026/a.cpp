#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,cnt=0,ans=0,buf=0;
  int a;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    if(buf==0){
      buf = a;
      cnt = 1;
    }
    else{
      if(buf!=a){
        if(cnt>1){
          ans += cnt/2;
        }
        cnt = 1;
        buf = a;
      }else if(buf==a){
        cnt++;
      }
    }
  }
  if(cnt>1){
    ans += cnt/2;
  }
  cout<<ans<<endl;
}