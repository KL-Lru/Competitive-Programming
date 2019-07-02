#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define T 1000
#define N 10
#define M 30000
#define P pair<ll, ll>
#define dP pair<double,ll>
/* t:ターン数 n:スキル数 m:モンスター数 */
ll t, n, m;
/* a:開始時間 b:終了時間 s:必要なスキル cnt:必要スキルのカウント */
ll a[M+1],b[M+1],c[M+1],s[M+1][N], cnt[T+2][N][N+1];
/* skill:現在のスキル状態 */
ll skill[N]={};
/* q: 行動格納queue tq:スキルトレーニングのqueue*/
priority_queue<P> q[T+1];
priority_queue<dP> tq;
/* used: 終了済みか */
bool used[M+1]={};
/* 現時点のスコア */
ll score = 1000;
P ans[T+1];

ll prize(ll *sk, ll turn, ll job){
  double skillrate = 0;
  ll husokuskill = 0;
  for(ll i = 0; i < N; i++){
    if(sk[i]<s[job][i]){
      husokuskill += s[job][i] - sk[i];
    }
  }
  if(husokuskill == 0)
    skillrate = 10;
  else
    skillrate = pow(0.5, husokuskill);
  double prizerate = 1 + (9 * (turn - a[job]) / (double)(b[job] - a[job]));
  if(prizerate < 0)
    cout << "Error" << endl;
  ll ret = floor(c[job] * prizerate * skillrate);
  return ret;
}

void recalc(ll lower){
  for(ll i = 1; i <= m; i++){
    for(ll turn = max(a[i], b[i]-10); turn <= b[i]; turn++){
      ll p = prize(skill, turn, i);
      q[turn].push(P(p, i));
    }
  }
  for(ll turn = t; turn > 0; turn--){
    // 最低ライン 
    q[turn].push(P(1000, -1));
    while(true){
      P top = q[turn].top();q[turn].pop();
      if(top.second == -1){
        ans[turn-1] = P(3, -1);
        break;
      }else{
        if(!used[top.second]){
          ans[turn-1] = top;
          used[top.second] = true;
          break;
        }
      }
    }
  }
}


int main(){
  cin >> t >> n >> m;
  for(ll i = 1; i <= m; i++){
    cin >> a[i] >> b[i] >> c[i];
    for(ll j = 0; j < n; j++){
      cin >> s[i][j];
    }
    for(ll turn = max(a[i], b[i]-10); turn <= b[i]; turn++){
      ll p = prize(skill, turn, i);
      q[turn].push(P(p, i));
    }
    for(ll j = 0; j < n; j++){
      cnt[b[i]+1][j][s[i][j]]++;
    }
  }

  /* カウント集計 */
  for(ll i = 0; i < n; i++){
    for(ll turn = t+1;turn > 0; turn--){
      for(ll j = N-1; j >= 0; j--){
        cnt[turn][i][j] += cnt[turn][i][j+1];
      }
    }
    for(ll turn = t+1;turn > 1; turn--){
      for(ll j = N-1; j >= 0; j--){
        cnt[turn-1][i][j] += cnt[turn][i][j];
      }
    }
  }

  for(ll turn = t; turn > 0; turn--){
    // 最低ライン 
    q[turn].push(P(1000, -1));
    while(true){
      P top = q[turn].top();q[turn].pop();
      if(top.second == -1){
        ans[turn-1] = P(3, -1);
        break;
      }else{
        if(!used[top.second]){
          ans[turn-1] = top;
          used[top.second] = true;
          break;
        }
      }
    }
  }

  /* 出力 */
  for(int turn = 0; turn < t; turn++){
    tq = priority_queue<dP>();
    for(ll i = 0; i < n; i++){
      tq.push(P(cnt[turn+1][i][skill[i]]/pow(2,skill[i]) , i+1));
      //cout << cnt[turn+1][i][skill[i]] << " ";
    }
    //cout << endl;
    if(score >= pow(2, (skill[tq.top().second-1])+1)*10000){
      cout << "1 " << tq.top().second << endl;
      score -= pow(2, (skill[tq.top().second-1])+1)*10000;
      skill[tq.top().second-1]++;


    }else if(ans[turn].second == -1){
      cout << ans[turn].first << endl;
      score += 1000;
    }else{
      cout << "2 " << ans[turn].second << endl;
      score += ans[turn].first;
    }
  }
}
