#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    if(i%2==0) cout << 'a';
    if(i%3==0) cout << 'b';
    if(i%4==0) cout << 'c';
    if(i%5==0) cout << 'd';
    if(i%6==0) cout << 'e';
    if(i%2 && i%3 && i%5) cout << i;
	cout << endl;
  }
}
