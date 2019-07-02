#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,h;
  cin >> h >> w;
  string s[h];
  for(int i=0;i<h;i++){
    cin >> s[i];
  }
  for(int i=0;i<2*h;i++){
    for(int j=0;j<w;j++){
      cout << s[i/2][j];
    }
    cout << endl;
  } 
}