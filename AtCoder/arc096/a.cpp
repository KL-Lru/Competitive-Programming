#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,x,y;
  cin >> a >> b >> c >> x >> y;
  if(2*c < a+b){
    int ans = 0;
    if(x < y){
      if(b < 2*c){
        cout << (2*c*x + (y-x)*b) << endl;
        return 0;
      }else{
        cout << 2*c*y << endl;
        return 0;
      }
    }else{
      if(a < 2*c){
        cout << (2*c*y + (x-y)*a) << endl;
        return 0;
      }else{
        cout << 2*c*x << endl;
        return 0;
      }
    }
  }else{
    cout << (a*x + b*y) << endl;
    return 0;
  }
}
