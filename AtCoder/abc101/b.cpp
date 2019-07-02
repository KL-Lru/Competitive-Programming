#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int tp = n;
  int cnt = 0;
  while(tp !=0){
    cnt += tp%10;
    tp /= 10;
  }
  cout<<(n%cnt==0?"Yes":"No")<<endl;
  return 0;
}