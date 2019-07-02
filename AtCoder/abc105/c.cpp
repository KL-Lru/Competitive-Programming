#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  vector<int> v;
  cin >> n;
  if(n==0){
    cout << 0 << endl;
    return 0;
  }
  while(n != 0){
    int md, dv;
    dv = n/(-2);
    md = n-dv*(-2);
    if(md == -1){
      dv++;
      md=1;
    }
    if(md == 1){
      v.push_back(1);
    }else{
      v.push_back(0);
    }
    n = dv;
  }
  for(int i=v.size()-1; i>=0;i--){
    cout << v[i];
  }
  cout << endl;
}

