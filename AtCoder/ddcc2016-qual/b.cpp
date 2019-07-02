#include<bits/stdc++.h>
using namespace std;
double r, n, m;
double cutline(int x){
  if(x <= 0 || x >= n) return 0;
  return 2*sqrt(pow(r,2)-pow(abs(x*(2*r/n)-r),2));
}

int main(){
  double ans = 0;
  cin >> r >> n >> m;
  for(int i=1; i <= n+m-1; i++){
    ans += max(cutline(i),cutline(i-m));
  }
  cout << setprecision(12) << ans << endl;
}