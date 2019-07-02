#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a*a+b*b == c*c) cout << a*b/2 << endl;
  if(b*b+c*c == a*a) cout << b*c/2 << endl;
  if(a*a+c*c == b*b) cout << a*c/2 << endl;
}