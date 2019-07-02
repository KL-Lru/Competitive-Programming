#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  double radn = (360.0 * (n%12) / 12.0) + 360.0 * m / (12.0 * 60.0) , radm = 360.0 * m / 60.0;
  cout << setprecision(12) << min(abs(radn-radm), 360 - abs(radn - radm)) << endl;
}