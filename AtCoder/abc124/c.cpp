#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int ev_cnt = 0, od_cnt = 0;
  for(int i=0;i<s.size();i++){
  	if(i%2 == 0){
      if(s[i] == '0') od_cnt++;
      else ev_cnt++;
    }else{
      if(s[i] == '0') ev_cnt++;
      else od_cnt++;
	}
  }
  cout << min(ev_cnt, od_cnt) << endl;
}