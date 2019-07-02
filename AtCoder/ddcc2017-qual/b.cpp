 #include<bits/stdc++.h>
using namespace std;
int main(){
  int x, ans = 0;
  for(int i=3;i>=0;i--){
    cin >> x;
    ans += (int)pow(12, i) * x;
  }
  cout << ans << endl;
}