#include<bits/stdc++.h>
using namespace std;
int main(){
  string s ;
  cin >> s;
  vector<int> v('z'-'a'+1);
  for(int i=0;i<4;i++) v[s[i] - 'A']++;
  int cnt = 0;
  for(int i=0;i<v.size();i++){
    if(v[i] == 2) cnt++;
  }
  cout << (cnt == 2? "Yes": "No") << endl;
}