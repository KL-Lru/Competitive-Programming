#include<bits/stdc++.h>
using namespace std;
#define INF 100
int main(){
  int n;
  cin >> n;
  int alp = 'z'-'a'+1;
  int mn[alp];
  for(int i=0;i<alp;i++) mn[i] = INF;
  string s; 
  for(int i=0;i<n;i++){
	int cnt[alp] = {};
    cin >> s;
    for(int j=0;j<s.size();j++){
      cnt[s[j]-'a']++;
    }
	for(int j=0;j<alp;j++) mn[j] = min(mn[j], cnt[j]);
  }
  for(int i=0;i<alp;i++){
    while(mn[i]!=0){
	  cout << (char)('a' + i);
      mn[i]--;
    }
  }
  cout << endl;
}
