#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll x,y,cnt=0;
  cin>>x>>y;
  while(x<=y){
    cnt++;x*=2;
  }
  cout<<cnt<<endl;
  return 0;
}