#include<bits/stdc++.h>
using namespace std;
#define P pair<int, int>
int main(){
  int h,w,n;
  cin >> h >> w >> n;
  vector<P> v(n);
  for(int i=0;i<n;i++){
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  int xs = 1, ys = 0, answer = h;
  for(int i=0;i<n;i++){
    if(v[i].first >= v[i].second + xs){
      answer = v[i].first-1;
      break;
    }
    if(v[i].first == v[i].second + ys){
      xs++;
      ys++;
    }
  }
  cout << answer << endl;
}