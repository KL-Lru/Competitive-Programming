#include<bits/stdc++.h>
using namespace std;
int main(){
  string x,y;
  cin >> x >> y;
  if(x.size() != y.size()){
    cout << (x.size() > y.size()?"GREATER":"LESS") << endl;
  }else{
    int f = 0;
    for(int i=0;i<x.size() && f == 0;i++){
      if(x[i] > y[i]) f = 1;
      if(x[i] < y[i]) f = -1;
    }
    cout << (f?(f>0?"GREATER":"LESS"):"EQUAL") << endl;
  }
}