#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,k;
  bool flag = false;
  cin >> n >> m >> k;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
      if(i*m+j*n-2*i*j == k) flag = true;
    }
  }
  cout << (flag?"Yes":"No") << endl;
}