#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<((n/1000==(n%1000)/100&&(n%1000)/100==(n%100)/10)||((n%1000)/100==(n%100)/10&&(n%100)/10==n%10)?"Yes":"No")<<endl;
  return 0;
}