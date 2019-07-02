#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll a,b,x,ans=0;
  cin >> a >> b >> x;
  ans = b/x - a/x + (a%x==0?1:0);
  cout << ans << endl;
}