#include<bits/stdc++.h>
using namespace std;
int sm(int n){
  return (n==0?0:n+sm(n-1));
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<(sm(b-a-1)-a)<<endl;
}