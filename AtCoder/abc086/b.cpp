#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,cat;
  cin >> a >> b;
  cat = a*pow(10,floor(log10(b))+1)+b;
  if(cat == pow((int)sqrt(cat), 2)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
