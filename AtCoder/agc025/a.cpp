#include<bits/stdc++.h>
using namespace std;
int wa(int n){
  int res=0;
  while(n!=0){
    res+=n%10;
    n/=10;
  }
  return res;
}

int main(){
  int n;
  int ans=1e+9;
  cin>>n;
  for(int i=1;i<n;i++){
    int j=n-i;
    ans=min(ans,wa(i)+wa(j));
  }
  cout<<ans<<endl;
}