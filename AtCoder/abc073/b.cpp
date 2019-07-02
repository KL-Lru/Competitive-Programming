#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int l,r;
  int sm = 0;
  cin >> n;
  for(int i=0;i<n;i++){
  	cin >> l >> r;
    sm += r-l+1;
  }
  cout << sm << endl;
}