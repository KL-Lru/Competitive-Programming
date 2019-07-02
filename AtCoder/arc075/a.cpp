#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int s[100], sm = 0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s[i];
    sm += s[i];
  }
  sort(s, s+n);
  for(int i=0;sm % 10 == 0 && i < n; i++){
    if(s[i] % 10 == 0) continue;
    sm -= s[i];
  }
  cout << (sm % 10 == 0? 0 : sm) << endl;
}