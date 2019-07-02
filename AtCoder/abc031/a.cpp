#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,d;
  cin>>a>>d;
  cout<<max(a,d)*(min(a,d)+1)<<endl;
}