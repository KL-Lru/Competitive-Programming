#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int sm = 0, tp;
  cin >> n ;
  for(int i=0;i<n;i++){
    cin >> tp;
    sm = sm+tp;
  } 
  cout << sm << endl;
}