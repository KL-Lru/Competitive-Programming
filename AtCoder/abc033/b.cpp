#include<bits/stdc++.h>
using namespace std;
#define P pair<string, int>
int main(){
  int n;
  cin >> n;
  P mx = P(" ", -1);
  int sm = 0;
  for(int i=0;i<n;i++){
    string s;
    int a;
    cin >> s >> a;
    if(mx.second < a) mx = P(s,a);
    sm += a;
  }
  if(mx.second > sm/2) cout << mx.first << endl;
  else cout << "atcoder" << endl;
}