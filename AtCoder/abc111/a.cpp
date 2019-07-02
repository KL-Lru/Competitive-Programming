#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a;
  for(int i = n%10; i != 0;n /= 10,  i = n%10)
    a.insert(a.begin(),(i == 1?9:1));
  for(int i = 0; i < a.size(); i++){
    cout << a[i];
  }
  cout << endl;
}
