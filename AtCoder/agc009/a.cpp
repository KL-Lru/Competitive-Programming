#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n;
  ll a[100000], b[100000];
  cin >> n ;
  ll cnt = 0;
  for(int i=0;i<n;i++)
    cin >> a[i] >> b[i];
  for(int i=n-1;i>=0;i--)
    cnt += (b[i] - ((a[i] + cnt) % b[i])) % b[i];
  cout << cnt << endl;  
}