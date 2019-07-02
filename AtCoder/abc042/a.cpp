#include<bits/stdc++.h>
using namespace std;
bool c[10] = {};

bool check(int n){
  while(n != 0){
    if(c[n%10]) return false;
    n/=10;
  }
  return true;
}

int main(){
  int n, k, a;
  cin >> n >> k;
  for(int i=0;i<k;i++) {
    cin >> a;
    c[a] = true;
  }
  int ans = 0;
  for(int i=n;i<=99999;i++){
    if(check(i)){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  
}