#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  cout << (n*(n-1)/2) - (n/2)<< endl;
  for(int x = 1; x <= n; x++){
    for(int y = x+1; y<= n; y++){
      if(x != n - y + ((n+1)%2)){
        cout << x << " " << y << endl;
      }
    }
  }
}

