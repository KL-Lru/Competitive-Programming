#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end(), greater<int>());
  for(int i=0;i<min(s.size(), t.size());i++){
    if(s[i] == t[i]) continue;
    if(s[i]>t[i]){
      cout << "No" << endl;
      return 0;
    }
    if(s[i]<t[i]){
      cout << "Yes" << endl;
      return 0;
    }    
  }
  cout << (s.size()>=t.size()?"No":"Yes") << endl;
}