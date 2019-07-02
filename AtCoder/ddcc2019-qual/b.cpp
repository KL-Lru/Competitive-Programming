#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  double n;
  cin >> n;
  bool v[(int)n+1][(int)n+1];
  int ans = 0;
  for(int x=0;x<=n;x++){
    for(int y=0;y<=n;y++){
      if(y <= x + n/2 && y >= -x + n/2 && y >= x  -  n / 2 && y <= -x + 3 * n / 2)
        v[x][y] = true;
      else v[x][y] = false;
    }
  }
  for(int x=0;x<n;x++){
    for(int y=0;y<n;y++){
      if(v[x][y] && v[x+1][y] && v[x][y+1] && v[x+1][y+1])
        ans++;
    }
  }
  cout << ans << endl;
}

