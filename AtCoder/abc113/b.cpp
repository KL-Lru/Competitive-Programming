#include<bits/stdc++.h>
using namespace std;
#define INF 1e+8
int main(){
  int n, a;
  double t, h, dst = INF;
  int ans = -1;
  cin >> n >> t >> a;
  for(int i=1;i<=n;i++){
    cin >> h;
    if(dst > abs(a-(t-h*0.006))){
      ans = i;
      dst = abs(a-(t-h*0.006));
    }
  }
  cout << ans << endl;
}