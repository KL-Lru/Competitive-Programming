#include<bits/stdc++.h>
using namespace std;
int main(){
  int l,h,n,a;
  cin >> l >> h >> n;
  for(int i=0;i<n;i++){
    cin >> a;
    cout << (a<l?l-a:(a>h?-1:0)) << endl;
  }
}