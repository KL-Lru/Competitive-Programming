#include <bits/stdc++.h>
using namespace std;
int main(){
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<char>> s(h, vector<char>(w));
  for(auto &si: s) for(auto &sij: si) {cin >> sij; sij -= '0';}
  int hseplim = (1 << (h - 1));
  int ans = h + w;
  for(uint pat = 0; pat < hseplim; pat++){
    bitset<10> bs(pat);
    int hsep = bs.count(), vsep = 0;
    vector<int> sep(hsep + 1, 0);
    bool b = false;
    for(int x=0; x<w; x++){
      vector<int> tsep(hsep + 1, 0);
      int curidx = 0;
      for(int y=0; y<h && !b; y++){
        if(s[y][x]) tsep[curidx]++;
        if(tsep[curidx] > k) b = true;
        if(bs[y]) curidx++;
      }
      if(b) break;
      bool over = false;
      for(int i=0; i<=hsep; i++) if(sep[i] + tsep[i] > k) over = true;
      if(over) {vsep++;}
      for(int i=0; i<=hsep; i++) sep[i] = over ? tsep[i] : sep[i] + tsep[i];
    }
    if(b) continue;
    ans = min(ans, hsep + vsep);
  }
  cout << ans << endl;
}
