#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, l;
  cin >> n >> l;
  vector<int> a(n+1);
  for(int i=1;i<=n;i++) cin >> a[i];
  int lst = -1;
  for(int i=1;i<=n-1 && lst < 0;i++) lst = (l <= a[i] + a[i+1]?i:-1);
  if(lst < 0){
    cout << "Impossible" << endl;
  }else{
    cout << "Possible" << endl;
    for(int i=1;i<lst;i++) cout << i << endl;
    for(int i=n-1;i>lst;i--) cout << i << endl;
    cout << lst << endl;
  }
}
