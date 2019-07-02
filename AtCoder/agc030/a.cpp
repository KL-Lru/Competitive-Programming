#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a+b>=c-1) cout << c+b << endl;
  else cout << b+(b+a+1) << endl;
}