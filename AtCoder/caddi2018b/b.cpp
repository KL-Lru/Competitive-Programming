#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,h,w, a,b,cnt = 0;
  cin >> n >> h >> w;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    if(a>=h && b>=w) cnt++;
  }
  cout << cnt << endl;
}