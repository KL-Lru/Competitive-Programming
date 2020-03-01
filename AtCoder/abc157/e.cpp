#include <bits/stdc++.h>
using namespace std;

template<class T>
class segTree{
    vector<T> tree;             // 木を示す配列
    int N;                      // 木で保持しているノード数
    T def_val;                  // 範囲外値(初期値)
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

vector<int> charm(char x){
    vector<int> def(27);
    def[x-'a']++;
    return def;
}

int spe(vector<int> x){
    int ret = 0;
    for(int c = 0; c < x.size(); c++){
        if(x[c] > 0)ret++;
    }
    return ret;
}

int main(){
    int n;
    string s;
    int q;
    cin >> n >> s >> q;
    int t;
    vector<vector<int>> tables(n, vector<int>(27));
    for(int i=0;i<n;i++){
        for(int c = 0; c < tables[i].size(); c++){
            tables[i][c] = (c == s[i] - 'a'?1:0);
        }
    }
    vector<int> def(27);
    segTree<vector<int>> tr(tables, [](vector<int> x, vector<int> y){
        vector<int> ret(27);
        for(int i=0;i<x.size();i++){
            ret[i] = x[i] + y[i];
        }        
        return ret;
    }, def);

    for(int i=0;i<q;i++){
        cin >> t;
        if(t == 1){
            int pos;
            char c;
            cin >> pos >> c;
            tr.update(--pos, charm(c));
        }else if(t == 2){
            int left, right;
            cin >> left >> right;
            cout << spe(tr.query(--left, right)) << endl;
        }
    }
}