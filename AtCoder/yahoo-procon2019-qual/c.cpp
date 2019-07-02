#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll k,a,b;
  cin >> k >> a >> b;
  if(b-a <= 2){
    cout << k+1 << endl;
  } else {
    ll accnt = k-(a-1);
    if(accnt < 2){
      cout << k+1 << endl;
    }else{
      cout << (a+(b-a)*(accnt/2)+(accnt%2)) << endl;
    }
  }
}
