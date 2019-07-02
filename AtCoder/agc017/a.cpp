#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n, p;
  cin >> n >> p;
  int a, cnt=0;
  for(int i=0;i<n;i++){
    cin >> a;
    cnt += a%2;
  }
  if(cnt == 0) cout << (p==0?(ll)pow(2,n):0) << endl;
  else cout << (ll)pow(2,n-1) << endl;
}