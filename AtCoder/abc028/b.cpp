#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int cnt[6] ={};
  cin >> s;
  for(int i=0;i<s.size();i++){
    cnt[s[i] - 'A']++;
  }
  for(int i=0;i<5;i++) cout << cnt[i] << " ";
  cout << cnt[5] << endl;
}