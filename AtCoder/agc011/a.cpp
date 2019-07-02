#include<bits/stdc++.h>
using namespace std;
int main(){
  double n,c,k;
  cin >> n >> c >> k;
  vector<int> t(n);
  for(int i=0;i<n;i++) cin >> t[i];
  sort(t.begin(), t.end());
  int cnt = 0, buf = t[0], rem = 1;
  for(int i=1;i<n;i++){
    if(buf+k < t[i] || rem == c){
      cnt++;
      buf = t[i];
      rem = 1;
    }else rem++;
  }
  
  cout << ++cnt << endl;
}