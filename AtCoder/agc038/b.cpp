#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF (1e+9)

vector<int> min_seg_tree;
vector<int> max_seg_tree;
int N;

void min_init(vector<int> &v){
  int n = v.size();
  N = pow(2, ceil(log2(n))); 
  min_seg_tree.resize(2*N-1);

  for(int i=0;i<N;i++) min_seg_tree[N-1+i] = (i>=n?INF:v[i]);
  for(int i=N-2;i>=0;i--) min_seg_tree[i] = min(min_seg_tree[2*i+1], min_seg_tree[2*i+2]);
}

int min_query(int a, int b, int ind, int l, int r){
  if(r <= a || b <= l) return INF;
  if(a <= l && r <= b) return min_seg_tree[ind];
  else return min(min_query(a, b, 2*ind+1, l, (l+r)/2), 
                  min_query(a, b, 2*ind+2, (l+r)/2, r));
}

void max_init(vector<int> &v){
  int n = v.size();
  N = pow(2, ceil(log2(n))); 
  max_seg_tree.resize(2*N-1);

  for(int i=0;i<N;i++) max_seg_tree[N-1+i] = (i>=n?-1:v[i]);
  for(int i=N-2;i>=0;i--) max_seg_tree[i] = max(max_seg_tree[2*i+1], max_seg_tree[2*i+2]);
}

int max_query(int a, int b, int ind, int l, int r){
  if(r <= a || b <= l) return -1;
  if(a <= l && r <= b) return max_seg_tree[ind];
  else return max(max_query(a, b, 2*ind+1, l, (l+r)/2), 
                  max_query(a, b, 2*ind+2, (l+r)/2, r));
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> p(n, 0);
    for(int i=0;i<n;i++) cin >> p[i];
    min_init(p);
    max_init(p);
    int cnt = 1;
    int buf = -1;
    int stair = 0;
    bool st = false;
    for(int i=0;i<k;i++){
        if(buf < p[i]){
            stair++;
        }else{
            stair = 1;
        }
        buf = p[i];
    }
    if (stair >= k){
        st = true;
    }
    for(int i = 0; i < n - k; i++){
        // i番目からの連続区間を評価
        // k個以上昇順に並んできているならソートしても元と変化しない
        // この区間の最低値と先頭の値が一致し, この区間の最大値よりこの直後の値が大きければ次のソートしたケースと変わらない
        if(!st){
            if (p[i] != min_query(i, i+k, 0, 0, N) || p[i+k] <= max_query(i, i+k,0,0,N)){
                cnt++;
            }
        }else{
            if (stair < k){
                if (p[i] != min_query(i, i+k, 0, 0, N) || p[i+k] <= max_query(i, i+k,0,0,N)){
                    cnt++;
                }
            }
        }
        if(buf < p[i+k]){
            stair++;
        }else{
            stair = 1;
        }
        buf = p[i+k];
        if (stair >= k){
            st = true;
        }
    }
    if(st){
        bool f = true;
        for(int i=n-k+1;i<n;i++){
            f = f && (p[i-1] < p[i]);
        }
        if(!f) cnt++;
    }
    cout << cnt << endl;
}
