#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, d;
  cin >> n >> d;
  int x[n][d];
  for(int i=0;i<n;i++){
      for(int j=0;j<d;j++){
          cin >> x[i][j];
      }
  }  
  int ans = 0;
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          double dist = 0;
          for(int dx =0;dx<d;dx++){
              dist += pow(x[i][dx]-x[j][dx], 2);
          }
          if(dist == pow((int)sqrt(dist),2))
            ans ++;
      }
  }
  cout << ans << endl;
}