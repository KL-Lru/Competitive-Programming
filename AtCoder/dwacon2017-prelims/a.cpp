#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  cout << max(0, b + a - n) << endl;
}
