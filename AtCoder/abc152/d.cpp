#include <bits/stdc++.h>
using namespace std;
int last(int x){
    return x%10;
}
int first(int x){
    return (x / pow(10, floor( log10(x) ) ));
}

int main(){
    int n;
    int mp[10][10]{};
    cin >> n;
    for(int i=1;i<=n;i++){
        mp[first(i)][last(i)]++;
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans += mp[last(i)][first(i)];
    }
    cout << ans << endl;
}