#include<bits/stdc++.h>
int gcd(int a, int b){
  if(a < b) return gcd(b, a);
  if(b == 0) return a;
  return gcd(b, a%b);
}

using namespace std;
int main(){
  int n;
  int a, g;
  cin >> n;
  cin >> g;
  for(int i=1;i<n;i++){
    cin >> a;
    g = gcd(a, g);
  }
  cout << g << endl;
}
