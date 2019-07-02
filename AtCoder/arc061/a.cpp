#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  bool sep[9] = {};
  string s;
  cin >> s;

  ll sum = 0;
  int rank = s.size();
  rank--;
  int pattern = (int)pow(2, rank);
  for(int i = 0; i < pattern; i++) {
    int tp = i;
    for(int j = 0; j < rank; j++) {
      sep[j] = (tp%2 == 1);
      tp /= 2;
    }
    ll crr = 0;
    for(int j = 0; j <= rank; j++) {
      crr += s[j] - '0';
      if(sep[j]){
        sum += crr;
        crr = 0;
      }else{
        crr *= 10;
      }
    }
    crr /= 10;
    sum += crr;
  }
  cout << sum << endl;
}