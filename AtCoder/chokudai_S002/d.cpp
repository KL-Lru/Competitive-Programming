#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,a,b,ans = 0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    ans += max(a,b);
  }
  cout << ans << endl;
}
