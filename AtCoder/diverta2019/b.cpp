#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int r,g,b,n;
  cin >> r >> g >> b >> n;
  int cnt = 0;
  for(int i=0;i*r<=n;i++){
    for(int j=0;i*r+j*g<=n;j++){
      if((n-(i*r+j*g))%b == 0) cnt++;
    }
  }
  cout << cnt << endl;
}