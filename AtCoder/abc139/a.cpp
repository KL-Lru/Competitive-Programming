#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;
  cin >> s >> t;
  int cnt=0;
  for(int i=0;i<3;i++)
    cnt += (s[i]==t[i]?1:0);
  cout << cnt << endl;
}