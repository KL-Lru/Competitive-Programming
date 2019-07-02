#include<bits/stdc++.h>
using namespace std;
#define P pair<double, int>

int main(){
  int n;
  double sm = 0;
  cin >> n;
  P a[100] = {};
  for(int i=0;i<n;i++){
    cin >> a[i].first;
    a[i].second = i;
    sm += a[i].first;
  }
  sm /= n;
  for(int i=0;i<n;i++) a[i].first = abs(a[i].first - sm);
  sort(a, a+n);
  cout << a[0].second << endl;
}