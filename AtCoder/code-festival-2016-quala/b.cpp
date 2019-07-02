#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, cnt = 0;
  bool used[100000] = {};
  cin >> n;
  vector<int> a(n+1);
  for(int i=1;i<=n;i++){
	cin >> a[i];    
  }
  for(int i=1;i<=n;i++){
    if(used[i]) continue;
	if(i == a[a[i]]){
      cnt++;
      used[a[i]] = true;
    }
  }
  cout << cnt << endl;
}