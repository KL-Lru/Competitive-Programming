#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  for(int i=1; i<=t; i++){
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    for(int r=0; r<n; r++){
      for(int c=0; c<n; c++){
        cin >> m[r][c];
      }
    }

    int trace = 0;
    for(int d=0; d<n; d++) trace += m[d][d];

    int dr = 0;
    for(int r=0; r<n; r++){
      vector<bool> dep(n, false);
      for(int c=0; c<n; c++){
        if(dep[m[r][c]]){
          dr++;
          break;
        }
        dep[m[r][c]] = true;
      }
    }        
    int dc = 0;
    for(int c=0; c<n; c++){
      vector<bool> dep(n, false);
      for(int r=0; r<n; r++){
        if(dep[m[r][c]]){
          dc++;
          break;
        }
        dep[m[r][c]] = true;
      }
    }        

    cout << "Case #" << i << ": " << trace << " " << dr << " " << dc << endl;
  }
}