#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX-5;
int filter(int x) {return (x < 0? INF:x);}
int main(){
  int x,y;
  cin >> x >> y;
  cout << min({filter(y-x), filter(y-(-x))+1, filter((-y)-x)+1, filter((-y)-(-x))+2}) << endl;
}