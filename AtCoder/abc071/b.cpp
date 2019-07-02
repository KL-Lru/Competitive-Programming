#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  char c = 'a';
  for(int i=0;i<s.size();i++){
  	if(s[i] < c) continue;
  	if(s[i] == c) c++;
    if(s[i] > c) break;
  }
  if(c == 'z'+1) cout << "None" << endl;
  else cout << c << endl;
}