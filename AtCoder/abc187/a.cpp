#include <bits/stdc++.h>
using namespace std;
int calc(int x){
  return (x / 100) + (x / 10 % 10) + (x % 10);
}
int main(){
  int a,b;
  cin >> a >> b;
  cout << max (calc(a), calc(b)) << endl;
}