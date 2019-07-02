#include<bits/stdc++.h>
using namespace std;
#define ll long long
using P=pair<ll,ll>;
int main(){
  int n;
  int a[100000], b[100000];
  P v[100000];
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i] >> b[i];
    v[i] = P(a[i]+b[i], i);
  }
  sort(v, v+n,greater<P>());
  ll scorex = 0, scorey = 0;
  for(int i=0;i<n;i++){
    if(i%2 == 0) scorex += a[v[i].second];
    else scorey += b[v[i].second];
  }
  cout << scorex-scorey << endl;
}