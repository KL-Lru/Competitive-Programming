#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  char s[50][50];
  cin >> n;
  for(int x=0;x<n;x++)
    for(int y=0;y<n;y++)
      cin >> s[x][y];
  for(int y=0;y<n;y++){
    for(int x=n-1;x>=0;x--){
      cout <<  s[x][y];
    }
    cout << endl;
  }  
}