#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  for (int p = 100; p >= 0; p--){
    int cnt = 0, sm = 0, nb = 0;
    for (int i = 0; i < n; i++){
      cnt++;
      sm += a[i];
      if(sm % cnt == 0 && sm / cnt == p){
        nb++;
        cnt = 0;
        sm = 0;
      }
    }
    if(cnt == 0 && sm == 0){
      cout << n - nb << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
