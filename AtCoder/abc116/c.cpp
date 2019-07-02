#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int h[100];
  int cnt = 0;
  cin >> n;
  for(int i=0;i<n;i++) cin >> h[i];
  for(int i=0;i<n;i++){
    while(h[i] > 0){
      cnt++;
      for(int j=i;j<n;j++){
        if(h[j] == 0) break;
        h[j]--;
      }
    }
  }
  cout << cnt << endl;
}