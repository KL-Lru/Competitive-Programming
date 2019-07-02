#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
      cin >> a >> b;
      v[i] = make_pair(min(a,b), max(a,b));
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()), v.end());
    cout << v.size() << endl;
}
