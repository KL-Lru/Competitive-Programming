#include <bits/stdc++.h>
using namespace std;
int main () {
  int a, b, c;
  cin >> a >> b >> c;
  cout << (a > (c == 1 ? b-1: b ) ? "Takahashi" : "Aoki") << endl; 
}