#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n ;
  vector<string> s(n);
  for(auto &si: s) cin >> si;
  ll truecase = 1, falsecase = 1;
  for(int i=0; i<n; i++){
    if(s[i] == "AND"){
      truecase = truecase;
      falsecase = falsecase * 2 + truecase;
    } else {
      truecase = truecase * 2 + falsecase;
      falsecase = falsecase;
    }
  }
  cout << truecase << endl;
}
