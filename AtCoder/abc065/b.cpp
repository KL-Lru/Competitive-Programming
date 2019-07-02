#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int a[100001];
  bool b[100001] = {};
  cin >> n;
  for(int i=1;i<=n;i++) cin >> a[i];
  int crr = 1, cnt = 0;
  while(true){
    if(crr == 2){
      cout << cnt << endl;
      return 0;
    }
    if(b[crr]) break;
    b[crr] = true;
    crr = a[crr];
    cnt++;
  }
  cout << -1 << endl;
  return 0;
}