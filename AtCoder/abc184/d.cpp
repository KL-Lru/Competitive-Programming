#include <bits/stdc++.h>
using namespace std;
using vd = vector<double>;
using vvd = vector<vd>;
using vvvd = vector<vvd>;

double solve(int x, int y, int z, vvvd& memo){
  if(x >= 100 || y >= 100 || z >= 100) return 0;
  if(memo[x][y][z] == 0){
    double sm = x + y + z;
    memo[x][y][z] += ((solve(x+1, y, z, memo) + 1) * x / (sm));
    memo[x][y][z] += ((solve(x, y+1, z, memo) + 1) * y / (sm));
    memo[x][y][z] += ((solve(x, y, z+1, memo) + 1) * z / (sm));
  } 
  return memo[x][y][z];
}

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  vvvd  dp(100, vvd(100, vd(100, 0)));
  cout << setprecision(12) << solve(a,b,c,dp) << endl;
}