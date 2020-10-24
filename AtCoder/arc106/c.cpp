#include <bits/stdc++.h>
using namespace std;
int main (){
  int n, m;
  cin >> n >> m;
  if(n == 1 && m != 0){
    cout << "-1" << endl;
    return 0;
  }
  if(n == 1 && m == 0) {
    cout << "1 2" << endl;
    return 0;
  }
  if(m < 0 || m >= n - 1) {
    cout << "-1" << endl;
    return 0;
  }
  for(int i=1;i<n; i++){
    cout << 3*i << " " << 3*i+1 << endl;
  }
  cout << 1 << " " << 3*(m+1)+2 << endl;
}
