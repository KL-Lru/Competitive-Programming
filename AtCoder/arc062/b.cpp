#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string s;
  cin >> s;
  int gcnt = 0, pcnt = 0, score = 0;
  for(int i = 0; i < s.size(); i++){
    if(gcnt > pcnt){
      if(s[i] == 'g') score++;
      pcnt++;
    }else{
      if(s[i] == 'p') score--;
      gcnt++;
    }
  }
  cout << score << endl;
}