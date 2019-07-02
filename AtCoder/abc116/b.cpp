#include<bits/stdc++.h>
using namespace std;
int func(int x){
  if(x%2 == 0) return x/2;
  else return 3*x+1;
}

int main(){
  bool used[30000] = {};
  int n;
  cin >> n;
  int x = n;
  int cnt = 1;
  while(!used[x]){
    used[x] = true;
    x = func(x);
    cnt++;
  }
  cout << cnt << endl;
}