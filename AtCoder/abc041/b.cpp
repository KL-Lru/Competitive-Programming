#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = (1e+9) + 7;
int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  cout << (((a*b)%MOD)*c) %MOD << endl;
}
