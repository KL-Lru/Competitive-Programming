#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, cnt = 1, buf, a, base = 1;
  bool det;
  cin >> n >> buf;
  for(int i=1;i<n;i++){
    cin >> a;
    if(buf == a) {
      base++;
      continue;
    }
    if(i == base){
      det = buf < a;
    }else if((buf < a) != det){
      cnt++;
      det = (buf < a);
      base = i+1;
    }
    buf = a;
  }
  cout << cnt << endl;
}