#include<bits/stdc++.h>
using namespace std;
typedef tuple<string, int, int> node;

int main(){
  int n;
  cin >> n;
  vector<node> v(n);
  string s;
  int x;
  for (int i = 1; i <= n; i++){
    cin >> s >> x;
    v[i-1] = make_tuple(s, x, i);
  }
  sort(v.begin(), v.end(), [](const node a, const node b) {
    if(get<0>(a) != get<0>(b))
      return get<0>(a) < get<0>(b);
    return get<1>(a) > get<1>(b);
  });
  for(auto r: v){
    cout << get<2>(r) << endl;
  }
}
