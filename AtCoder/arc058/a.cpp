#include<bits/stdc++.h>
using namespace std;
bool a[10]={};
bool ok(int x){
  while(x != 0){
    if(a[x%10]) return false;
    x /= 10;
  }
  return true;
}

int main(){
  int n,k,tp;
  cin>>n>>k;
  for(int i=0;i<k;i++){
  	cin>>tp;
    a[tp]=true;
  }
  while(!ok(n)) n++;
  cout << n << endl;
}