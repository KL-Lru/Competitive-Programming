#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  switch(s[k-1]){
    case 'A': s[k-1] = 'a';break;
    case 'B': s[k-1] = 'b';break;
    case 'C': s[k-1] = 'c';break;
  }
  cout << s << endl;
}