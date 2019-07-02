#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string a,b,c;
  int n;
  cin >> n >> a >> b >> c;
  int cnt = 0;
  for(int i=0;i<n;i++){
    if(a[i] == b[i] && b[i] == c[i]) continue;
    else if(a[i] == b[i] || b[i] == c[i] || a[i] == c[i]) cnt++;
    else cnt += 2;
  }
  cout << cnt << endl;
}