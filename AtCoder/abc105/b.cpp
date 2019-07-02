#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  bool f = false;
  for(int i=0;i*4<=n;i++){
    for(int j=0;j*7+i*4<=n;j++){
      if(i*4+j*7==n) f = true;
    }
  }
  cout << (f?"Yes":"No")<<endl;
}