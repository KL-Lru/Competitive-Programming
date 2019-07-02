#include<bits/stdc++.h>
using namespace std;
int dp[3001][3001]; //s側x文字まで, t側y文字までで作れる最大文字数をdp[x][y]としてみる

int main(){
  string s,t;
  cin >> s >> t;
  dp[0][0] = 0;
  for(int i=0;i<s.size();i++){
    for(int j=0;j<t.size();j++){
      if(s[i] == t[j]){
        dp[i+1][j+1] = dp[i][j] + 1;
      }else{
        dp[i+1][j+1] = (dp[i][j+1] >= dp[i+1][j]?dp[i][j+1]:dp[i+1][j]);        
      }
    }
  }
  string ans = "";
  int i = s.size(), j = t.size();
  // dpの値が同じならその要素は使われず、違うなら使われるのでanswerに足す
  while(i>0 && j>0){
    if(dp[i][j] == dp[i-1][j]){
      i--;
    }else if(dp[i][j] == dp[i][j-1]){
      j--;
    }else{
      ans = s[i-1 ] + ans;
      i--;j--;
    }
  }
  cout << ans << endl;
}