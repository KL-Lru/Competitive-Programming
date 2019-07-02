#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,a;
  int sm = 0;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> a;
    sm += (a < k-a?a:k-a)*2;
  }
  cout << sm << endl;
}