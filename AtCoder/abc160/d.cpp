#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> cnt(n);
    for(int i=1;i <= n; i++){
        for(int j=i+1; j <= n; j++){
            cnt[min(j-i, abs(x-i) + 1 + abs(y-j))]++;
        }
    }
    for(int i=1;i < n; i++){
        cout << cnt[i] << endl;
    }
}
