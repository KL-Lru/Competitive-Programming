#include<bits/stdc++.h>
using namespace std;
int func(int n){
  return (n*n+4)/8;
}

int main(){
  cout << func(func(func(20))) << endl;
}