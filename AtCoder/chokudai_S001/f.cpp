#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n ;
  int mx = 0, tp, ans =0;
  for(int i=0;i<n;i++){
    cin >> tp;
    if(tp > mx){
      ans++;
      mx = tp;
    }
  } 
  cout << ans << endl;
}