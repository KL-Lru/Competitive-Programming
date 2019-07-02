#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,a,b,c,d,ans  =0;
  cin >> t >> a >> b >> c >> d;
  if(t>=c){
    ans += d;
    t-=c;
  }
  if(t>=a){
    ans += b;
  }
  cout << ans << endl;
}