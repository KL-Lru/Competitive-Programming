#include<bits/stdc++.h>
using namespace std;
bool jd(int x, int y){
  if(x > y) return jd(y,x);
  if((y-x)%2 == 1) return false;
  int bas = x - (y-x)/2;
  return (bas >= 0 && bas % 4 == 0);
}

int main(){
  int x,y;
  cin >> x >> y;
  cout << (jd(x,y)?"Yes":"No") << endl;
}