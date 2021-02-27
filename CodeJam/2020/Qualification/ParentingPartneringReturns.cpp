#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int c = 1; c <= n; c++) {
    int t;
    cin >> t;
    int s, e;
    vector<tuple<int, int, int>> task;
    for (int i = 0; i < t; i++) {
      cin >> s >> e;
      task.push_back({s, e, i});
    }
    sort(task.begin(), task.end());
    char ans[t];
    int cam = 0, jam = 0;
    bool pos = true;
    for (int i = 0; i < t; i++) {
      if (cam <= get<0>(task[i])) {
        cam = get<1>(task[i]);
        ans[get<2>(task[i])] = 'C';
      }
      else if (jam <= get<0>(task[i])) {
        jam = get<1>(task[i]);
        ans[get<2>(task[i])] = 'J';
      } else {
        pos = false;
        break;
      }
    }
    cout << "Case #" << c << ": ";
    if (pos) {
      for (int i = 0; i < t; i++) {
        cout << ans[i];
      }
    }
    else {
      cout << "IMPOSSIBLE";
    }
    cout << endl;
  }
}