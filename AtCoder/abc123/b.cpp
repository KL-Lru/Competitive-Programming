#include<bits/stdc++.h>
using namespace std;
int main(){
  int x, sm = 0, diff = 0;
  for(int i=0;i<5;i++){
    cin >> x;
    sm += ((x/10)+(x%10 == 0? 0 : 1))*10;
    diff = max(diff, (10-(x%10))%10 );
  }
  cout << sm - diff << endl;
}