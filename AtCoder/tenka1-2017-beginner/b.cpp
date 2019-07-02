#include<bits/stdc++.h>
using namespace std;
#define P pair<int, int>
int main(){
  int n;
  int a, b, mx = -1, mp;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    if(mx < a){
      mx = a;
      mp = b;
    }
  }
  cout << mx+mp << endl;
}