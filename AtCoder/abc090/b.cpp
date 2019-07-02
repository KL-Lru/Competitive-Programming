#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  int cnt=0;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(i%10==i/10000&&(i/10)%10==(i/1000)%10)
      cnt++;
  }
  cout<<cnt<<endl;
}