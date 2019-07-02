#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll p;
  cin >> p;
  ll th = 1789997546303;
  ll ans[1001]={};
  int crr = 1000;
  while(th != 0){
    ans[crr] = th;
    if(th>=10000000000000000 || th <= 1) th = 0;
    else if(th%2 == 0) th = th/2;
    else th = th*3 + 1;
    crr--;
  }
  ans[0] = 1;
  cout << ans[p] << endl;
}
 