#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
  int n;
  cin >> n;
  unordered_map<int, int> m1, m2;
  int v;
  for(int i=0;i<n;i++){
    cin >> v;
    (i%2==0?m1:m2)[v] ++;
  }
  P mx1 = make_pair(-1,0), mx2 = make_pair(-1,0);
  int nx1 = 0, nx2 = 0;
  for(auto itr: m1){
    if(mx1.second <= itr.second){
      nx1 = mx1.second;
      mx1 = itr;
    }else if(itr.second > nx1) nx1 = itr.second;
  }

  for(auto itr: m2){
    if(mx2.second <= itr.second){
      nx2 = mx2.second;
      mx2 = itr;
    }else if(itr.second > nx2) nx2 = itr.second;
  }
  cout << (mx1.first != mx2.first ? n - (mx1.second + mx2.second) : n - max(mx1.second + nx2, nx1 + mx2.second)) << endl;
}
