#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, p[10], mx = 0, sm = 0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> p[i];
    mx = max(mx, p[i]);
    sm += p[i];
  }
  cout << (sm - mx/2) << endl;
}
