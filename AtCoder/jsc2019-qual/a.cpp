#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,d;
  cin >> m >> d;
  int cnt = 0;
  for(int month = 1; month <= m; month++){
    for(int day = 22;day <= d; day++){
      if(day%10 <2) continue;
      if(month == (day%10) * (day/10)){
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}