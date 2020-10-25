#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int sm = a + b + c + d;
  for(int i = 1; i < 16; i++) {
    int eats = 0;
    if(i%2) eats += a;
    if(i/2%2) eats += b;
    if(i/4%2) eats += c;
    if(i/8%2) eats += d;
    if(eats == sm - eats) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}