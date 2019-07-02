#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  string s[100];
  cin >> h >> w;
  for(int i=0;i<h;i++) cin >> s[i];
  for(int i=0;i<w+2;i++) cout << "#";
  cout << endl;
  for(int i=0;i<h;i++) cout << "#" << s[i] << "#" << endl;
  for(int i=0;i<w+2;i++) cout << "#";
  cout << endl;  
}