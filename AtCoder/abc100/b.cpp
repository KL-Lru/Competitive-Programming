#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll d,n,ans=1;
  cin >> d >> n;
  for(int i = 0;i < d;i++) ans*=100;
  cout << (n != 100 ? ans * n : ans * (n+1) ) << endl;
}