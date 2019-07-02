#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, a, pr = 1;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a;
    pr *= (a%2==0?2:1);
  }
  cout << (int)pow(3,n) - pr << endl;
}