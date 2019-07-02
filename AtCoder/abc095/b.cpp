#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x, mn = 1000000;
  cin >> n >> x;
  vector<int> m(n);
  for(int i=0; i<n; i++){
    cin >> m[i];
    x-=m[i];
    mn = min(mn,m[i]);
  }
  cout << n + x/mn << endl;  
}