#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int n=s.size();
  for(int i=n-1; i>0; i--){
    if(s[i] == 'A'){
      if(s[i-1] == 'W'){
        s[i] = 'C';
        s[i-1] = 'A';
      }
    }
  }
  cout << s << endl;
}