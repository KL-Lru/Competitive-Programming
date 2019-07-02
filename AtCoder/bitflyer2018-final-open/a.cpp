#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, p, mn = 100;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> p;
	int cnt = 0;
    while(p%10 == 0){
      cnt++;
      p /= 10;
    }
    mn = min(mn, cnt);
  }
  cout << mn << endl;
}
