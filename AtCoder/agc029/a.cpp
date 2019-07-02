#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string s;
  cin >> s;
  int pw = 0;
  ll cnt = 0;
  for(int i=0;i<s.size();i++){
    if(s[i] == 'W'){
      cnt += i-pw++;
    }
  }
  cout << cnt << endl;
}