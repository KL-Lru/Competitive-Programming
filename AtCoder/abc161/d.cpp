#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    string x;
    queue<string> q;
    for(char c='1';c<='9';c++) q.push({c});
    int cnt = 0;
    while(true){
        cnt++;
        string x = q.front();q.pop();
        if(cnt == k){
            cout << x << endl;
            return 0;
        }
        for(int i = -1; i <= 1; i++){
            char c = x[x.size()-1] + i;
            if(c < '0' || '9' < c) continue;
            q.push(x + c);
        }
    }
}