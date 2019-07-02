#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n, x, mn = 1e+16;
  cin >> n;
  for(int i=0;i<5;i++){
    cin >> x;
    mn = min(x, mn);
  }
  cout << n / mn + (n % mn == 0?4:5) << endl;
}