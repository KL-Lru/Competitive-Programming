#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  ll l[87] = {};
  cin >> n;
  l[0] = 2;
  l[1] = 1;
  for(int i=2;i<=n;i++){
    l[i] = l[i-1] + l[i-2];
  }
  cout << l[n] << endl;
}