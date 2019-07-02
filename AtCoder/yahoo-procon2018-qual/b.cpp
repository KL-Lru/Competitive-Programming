#include<bits/stdc++.h>
using namespace std;
int main(){
  int x, k, lv = 0;
  cin >> x >> k;
  lv = x / (int)pow(10, k);
  cout << (lv+1) * (int)pow(10, k) << endl;
}