#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll x;
  cin >> x;
  cout << (2*(x/11) + (x%11==0?0:(x%11<=6?1:2))) << endl;
}
