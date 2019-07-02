#include<bits/stdc++.h>
using namespace std;
#define INF 5e+19
#define ll long long
int main(){
  ll ans = INF;
  int n,k;
  cin >> n >> k;
  ll x[n], y[n];
  for(int i=0;i<n;i++){
    cin >> x[i] >> y[i];
  }
  for(int rx=0;rx<n;rx++){
    for(int lx=0;lx<n;lx++){
      for(int uy=0;uy<n;uy++){
        for(int dy=0;dy<n;dy++){
          ll xmax = max(x[lx], x[rx]);
          ll xmin = min(x[lx], x[rx]);
          ll ymax = max(y[uy], y[dy]);
          ll ymin = min(y[uy], y[dy]);
          int cnt = 0;
          for(int s=0;s<n;s++){
            if(xmax>=x[s] && xmin<=x[s] && ymax >= y[s] && ymin <= y[s]){
              cnt++;
            }
          }
          if(cnt >= k)
            ans = min(ans, (xmax-xmin)*(ymax-ymin));
        }
      }
    }
  }
  cout << ans << endl;
}