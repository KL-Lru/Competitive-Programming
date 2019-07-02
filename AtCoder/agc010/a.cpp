#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x,odd = 0;
  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> x;
    odd += x%2;
  }
  cout << (odd%2 == 0?"YES":"NO") << endl;
}