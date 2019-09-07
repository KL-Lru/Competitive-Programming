#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(i != 0 && s[i] == 'L' && s[i-1] == 'L'){
            cnt++;
        }
        if(i != n-1 && s[i] == 'R' && s[i+1] == 'R'){
            cnt++;
        }
    }
    cout << min(cnt + k*2, n-1) << endl;
}