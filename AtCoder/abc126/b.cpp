#include<bits/stdc++.h>
using namespace std;
int main(){
  int s;
  cin >> s;
  bool ym = false, my = false;
  int tl = s%100, hd = s/100;
  if(tl >= 1 && tl <= 12) ym = true;
  if(hd >= 1 && hd <= 12) my = true;
  if(ym && my) cout << "AMBIGUOUS" << endl;
  else if(ym) cout << "YYMM" << endl;
  else if(my) cout << "MMYY" << endl;
  else cout << "NA" << endl;
}