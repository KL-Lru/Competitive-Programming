#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  set<string> st;
  for (auto &si: s) cin >> si;
  sort(s.begin(), s.end(), greater<string>());
  for(int i=0; i<n; i++){
    if(s[i][0] == '!'){
      if(st.find(s[i].substr(1)) != st.end()){
        cout << s[i].substr(1) << endl;
        return 0;
      }
    } else {
       st.insert(s[i]);
    }
  }
  cout << "satisfiable" << endl;
}