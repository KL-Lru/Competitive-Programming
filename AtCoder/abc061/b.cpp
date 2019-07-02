#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  int cnt[50]={};
  cin >> n >> m ;
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    cnt[--a]++;
    cnt[--b]++;
  }
  for(int i=0;i<n;i++){
    cout << cnt[i] << endl;
  }
}