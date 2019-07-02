#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  stack<int> a;
  cin >> n;
  vector<int> b(n);
  for(int i=0;i<n;i++) cin >> b[i];
  while(!b.empty()){
    bool e = true;
    for(int i=b.size()-1;i>=0;i--){
      if(i+1 == b[i]){
        a.push(b[i]);
        b.erase(b.begin()+i);
        e = false;
        break;
      }
    }
    if(e){
      cout << -1 << endl;
      return 0;
    }
  }
  while(!a.empty()){
    cout << a.top() << endl;
    a.pop();
  }
}