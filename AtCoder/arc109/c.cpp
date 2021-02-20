#include <bits/stdc++.h>
using namespace std;

char compair(char x, char y){
  if(x == y) return x;
  if((x == 'R' && y == 'S') ||(x == 'S' && y == 'R')) return 'R';
  if((x == 'R' && y == 'P') ||(x == 'P' && y == 'R')) return 'P';
  if((x == 'P' && y == 'S') ||(x == 'S' && y == 'P')) return 'S';
};

string calc(string s){
  string ns = s + s;
  for(int i=0; i<s.size(); i++) {
    s[i] = compair(ns[2*i], ns[2*i+1]);
  }
  return s;
}

int main(){
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  if(n % 2 == 1) s += s;
  vector<char> datas(s.begin(), s.end());
  for(int i=0; i<k; i++) s = calc(s);
  cout << s[0] << endl;
}