#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,a,b;
  cin >> n >> a >> b;
  cout << max((b*(n-1)+a) - (a*(n-1)+b) + 1, (ll)0) << endl;
}
