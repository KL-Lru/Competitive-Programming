#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<(n<60?"Bad":(n<90?"Good":(n<100?"Great":"Perfect")))<<endl;
  return 0;
}