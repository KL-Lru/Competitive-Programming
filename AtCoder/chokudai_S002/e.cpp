#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,a,b,ans =0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    ans += min(a/2, b);
  }
  cout << ans << endl;
}
