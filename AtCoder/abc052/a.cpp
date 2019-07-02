#include<bits/stdc++.h>
using namespace std;
#define md 1000000007
#define ll long long
int main(){
  int n;
  int dd[1001]={};
  int div = 2;
  ll ans = 1;
  cin>>n;
  for(int i=2;i<=n;i++){
    dd[i] = i;
  }
  for(int i=2;i<=1000;i++){
    if(dd[i] == 0) break;
    if(dd[i] != 1){
      int cnt = 1;
      for(int j=i+1;j<=1000;j++){
        if(dd[j] == 0) break;
        while(dd[j]%i == 0){
          dd[j] /= i;
          cnt++;
        }
      }
      dd[i] = cnt;
    }else dd[i]=0;
  }

  for(int i=2;i<1000;i++){
    ans = (ans*(dd[i]+1))%md;
  }
  cout<<ans<<endl;
}