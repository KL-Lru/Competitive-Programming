#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;
  string s;
  bool flag = false;
  cin >> a >> s;
  if(a == 0){
    flag = true;
  }
  for(int i=0;i<s.size();i++){
    if(s[i] == '+') a++;
    if(s[i] == '-') a--;
    if(a == 0) flag = true;
  }
  cout << (flag?"Yes":"No") << endl;
}