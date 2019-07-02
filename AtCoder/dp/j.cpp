#include<bits/stdc++.h>
using namespace std;
int n;
int a[300];
double dp[301][301][301] = {};

double solve(int one, int two, int three){
  if(!(one + two + three)) return 0; // 合計が0だったらreturn
  double *p = &dp[one][two][three];
  if(*p){
    return *p; // dpでもうやってたらreturn
  }
  *p = n;
  if(one) *p += one * solve(one-1, two, three);
  if(two) *p += two * solve(one+1, two-1, three);
  if(three) *p += three * solve(one, two+1, three-1);
  *p /= (one + two + three);
  return *p;
}

int main(){
  cin >> n;
  int one = 0, two = 0, three = 0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    switch(a[i]){
      case 1: one++;break;
      case 2: two++;break;
      case 3: three++;break;
    }
  }
  cout << setprecision(12) << solve(one, two, three) << endl;
}
