#include<bits/stdc++.h>
using namespace std;
int main(){
  double a,b;
  cin >> a >> b;
  int cnt = 0;
  while(cnt*(a-1) + 1 < b) cnt ++;
  cout << cnt << endl;
}