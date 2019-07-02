#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, base[3], ans = 1000000000;
  int l[8];
  cin >> n >> base[0] >> base[1] >> base[2];
  for(int i=0; i<n; i++)
    cin >> l[i];
  for(int i=0, pat = pow(4,n); i<pat; i++){
    bool testa[3] = {}, cont = false;
    int now = i, cost = 0, leng[3] = {}, j = -1;
    while(now != 0){
      int tar = (now % 4) - 1;
      now /= 4;
      j++;
      if(tar < 0)
        continue;
      if(leng[tar] > 0) cost += 10;
      leng[tar] += l[j];
      testa[tar] = true;
    }
    for(int k=0;k<3;k++){
      if(!testa[k]) cont = true;
    }
    if(cont) continue;
    for(int k=0;k<3;k++){
      cost += abs(base[k] - leng[k]);
    }
    ans = min(ans, cost);
  }
  cout << ans << endl;
}
