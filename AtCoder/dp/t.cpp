#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e+9 +7;

template<class T>
class seg_tree{
    vector<T> tree;
    int N;
    T def_val;
    function<T(T,T)> selector;

    public: 
        seg_tree(vector<T> &v, function<T(T,T)> f, T default_val){
            int n = v.size();
            N = pow(2, ceil(log2(n))); 
            tree.resize(2*N-1);
            selector = f;
            def_val = default_val;

            for(int i=0;i<N;i++) tree[N-1+i] = (i>=n?def_val:v[i]);
            for(int i=N-2;i>=0;i--) tree[i] = selector(tree[2*i+1], tree[2*i+2]);
        };

        void update(int ind, T val){
            ind += N - 1;
            tree[ind] = val;
            while(ind > 0){
                ind = (ind - 1) / 2;
                tree[ind] = selector(tree[2*ind+1], tree[2*ind+2]);
            }
        };
        T query(int a, int b, int ind = 0, int l = 0, int r = -1){
            if(r < 0) r = N;
            if(r <= a || b <= l) return def_val;
            if(a <= l && r <= b) return tree[ind];
            else return selector(query(a, b, 2*ind+1, l, (l+r)/2), 
                                 query(a, b, 2*ind+2, (l+r)/2, r));
        };
};

int main(){
    int n;
    string s;
    cin >> n >> s;

    ll dp[n+1][n+1] = {}; // dp[先頭からn桁目]['<'の当てはまる要素数]
    // 1桁目は1~nまで('<'の当てはまる要素数が0~n-1まで)一つずつありえる
    for( int i = 0; i < n; i++){
        dp[0][i] = 1;
    }

    for( int i = 1; i < n; i++){
        vector<ll> vc(dp[i-1], dp[i-1] + n - i + 1); // 先頭から離れる毎に対象区間を狭める
        seg_tree<ll> st(vc, [](const ll x, const ll y){return (x+y)%MOD;}, 0);
        for( int j = 0; j < n; j++){
            dp[i][j] += (s[i-1] == '<'? st.query(0, j+1): st.query(j+1,n));
        }
    }
    cout << dp[n-1][0] << endl;
}