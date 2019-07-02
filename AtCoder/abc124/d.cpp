#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,k;
  string s;
  cin >> n >> k >> s;
  vector<int> ln; /* 偶数添字で1の連続数, 奇数添字で0の連続数を記録 */
  char buf = '1';
  int cnt = 0;
  for(int i=0;i<n;i++){
    if(buf != s[i]){
      ln.push_back(cnt);
      cnt = 1;
      buf = s[i];
    }else cnt++;
  }
  ln.push_back(cnt);
  int suml[ln.size()+1]={}; // i番目までグループまでに何人いるか
  for(int i=0;i<ln.size();i++){
    suml[i+1] = suml[i] + ln[i];
  }
  int ans = 0;
  for(int i=1;i<=ln.size();i++){
    if(i % 2 == 1){
      // i番目は1
      ans = max(ans, suml[min((int)ln.size(), i+2*k)]-suml[i-1]);
    }else{
      // i番目は0
      ans = max(ans, suml[min((int)ln.size(), i+2*k-1)]-suml[i-1]);      
    }
  }
  cout << ans << endl;
}
