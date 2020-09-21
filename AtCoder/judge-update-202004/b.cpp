#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  priority_queue<int,vector<int>, greater<int>> r, b;
  int x;
  char c;
  for(int i=0; i<n; i++){
    cin >> x >> c;
    if(c == 'R') r.push(x);
    else b.push(x);
  }
  while(!r.empty()){
    cout << r.top() << endl;
    r.pop();
  }
  while(!b.empty()){
    cout << b.top() << endl;
    b.pop();
  }
}