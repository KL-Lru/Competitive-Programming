#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int a;
  int ans = 0;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>a;
    while(a%2==0){
      ans += 1;
      a/=2;
    }
  }
  cout<<ans<<endl;
}