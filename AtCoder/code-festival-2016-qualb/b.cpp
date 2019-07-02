#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, a, b, cnt=0, fcnt=0;
  string s;
  cin >> n >> a >> b;
  cin >> s;
  for(int i=0;i<n;i++){
    if(s[i] == 'a'){
      if(cnt < a+b){
        cout << "Yes" << endl;
        cnt++;
      }else cout << "No" << endl;
    }else if(s[i] == 'b'){
      if(cnt < a+b && fcnt < b){
        cout << "Yes" << endl;
        cnt++;fcnt++;
      }else cout << "No" << endl;      
    }else cout << "No" << endl;
  }
}