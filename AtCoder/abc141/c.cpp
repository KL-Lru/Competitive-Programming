#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,a;
    cin >> n >> k >> q;
    vector<int> score(n, k-q);
    for(int i=0;i<q;i++){
        cin >> a;
        score[--a]++;
    }
    for(int i=0;i<n;i++){
        cout << (score[i] > 0 ? "Yes" : "No" ) << endl;
    }
}