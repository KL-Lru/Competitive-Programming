#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  stack<char> st;
  cin >> s;
  int n = s.size(), cnt = 0;
  for(int i=0; i<n; i++){
    if(st.empty()){
      st.push(s[i]);
      continue;
    }
    if(st.top() != s[i]){
      cnt += 2;
      st.pop();
    }else{
      st.push(s[i]);
    }
  }
  cout << cnt << endl;
}
