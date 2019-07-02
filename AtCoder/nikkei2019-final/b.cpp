#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n, m, k;
  cin >> n >> m >> k;
  int x[n];
  int y[m];
  for(int i=0;i<n;i++) cin >> x[i];
  for(int i=0;i<m;i++) cin >> y[i];
  if(n<m) cout << 'X' << endl;
  else if(m<n) cout << 'Y' << endl;
  else{
    for(int i=0;i<n;i++){
      if(x[i]>y[i]){
        cout << 'Y' << endl;
        return 0;
      }else if(x[i]<y[i]){
        cout << 'X' << endl;
        return 0;
      }
    }
    cout << "Same" << endl;
  }
}