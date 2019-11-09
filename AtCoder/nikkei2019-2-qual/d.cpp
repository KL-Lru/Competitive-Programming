#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
const ll INF = 1e+15;

template<class T>
class segTree{
    vector<T> tree;             // 木を示す配列
    int N;                      // 木で保持しているノード数
    T def_val;                  // 範囲外などの時に返却する値
    function<T(T,T)> selector;  // 選択関数(max, min, sum etc...)

    public: 
        // 初期化
        segTree(vector<T> &v, function<T(T,T)> f, T default_val){
            int n = v.size();
            N = pow(2, ceil(log2(n))); 
            tree.resize(2*N-1);
            selector = f;
            def_val = default_val;

            for(int i=0;i<N;i++) tree[N-1+i] = (i>=n?def_val:v[i]);
            for(int i=N-2;i>=0;i--) tree[i] = selector(tree[2*i+1], tree[2*i+2]);
        };

        // 値の更新
        void update(int ind, T val){
            ind += N - 1;
            tree[ind] = val;
            while(ind > 0){
                ind = (ind - 1) / 2;
                tree[ind] = selector(tree[2*ind+1], tree[2*ind+2]);
            }
        };

        // 値の取得(半閉区間[a,b)の範囲)
        T query(int a, int b, int ind = 0, int l = 0, int r = -1){
            if(r < 0) r = N;
            if(r <= a || b <= l) return def_val;
            if(a <= l && r <= b) return tree[ind];
            else return selector(query(a, b, 2*ind+1, l, (l+r)/2), 
                                 query(a, b, 2*ind+2, (l+r)/2, r));
        };
};


int main(){
    int n, m;
    cin >> n >> m;
    int l, r, c;
    vector<ll> dp(n, INF);

    vector<vector<P>> edge(n, vector<P>()); 
    for(int i=0;i<m;i++){
        cin >> l >> r >> c;
        --l;--r;
        edge[r].push_back({c, l});
    }
    dp[0] = 0;
    segTree<ll> st(dp, [](ll x, ll y){return min(x,y);}, INF);
    for(int i=1;i<n;i++){
        for(auto e: edge[i]){
            ll cost = st.query(e.second, i);
            dp[i] = min(cost + e.first, dp[i]);
            st.update(i, dp[i]);
        }
    }
    if ( dp[n-1] == INF) cout << -1 << endl;
    else cout << dp[n-1] << endl;
}