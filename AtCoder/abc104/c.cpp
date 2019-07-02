#include <bits/stdc++.h>
using namespace std;
int main(){
  int d,g;
  int p[10], c[10];
  bool used[10] = {};
  cin >> d >> g;
  for(int i = 0; i < d; i++){
    cin >> p[i] >> c[i];
  }
  int lim = pow(2,d);
  int ans = 1000000;
  for(int i = 0; i < lim; i++){
    // どの得点の問題を解くのか設定
    int crr = i;
    for(int j = 0; j < d; j++){
      used[j] = (crr%2 == 1);
      crr /= 2;
    }

    // スコア計算
    int score = 0, cnt = 0;
    for(int j = 0; j < d; j++){
      if(used[j]){
        score += p[j]*100*(j+1) + c[j];
        cnt += p[j];
      }
    }

    // 足りなければ解いてない問題のうち最大得点のものを解く
    if(score < g){
      int tar = -1;
      for(int j = d-1; j >=0; j--){
        if(!used[j]){
          tar = j;
          break;
        }
      }
      if(tar < 0){
        continue;
      }
      int qnum = (int)ceil((g-score)/((double)(tar+1)*100));
      if(qnum > p[tar]){
        continue;
      }
      cnt += qnum;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}