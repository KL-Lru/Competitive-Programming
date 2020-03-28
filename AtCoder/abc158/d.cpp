#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int q;
    bool f = true;
    cin >> s >> q;

    deque<char> dq{};
    for (auto c: s){
        dq.push_back(c);
    }
    for(int i=0; i<q; i++){
        int t;
        cin >> t;
        if (t == 1){
            f = !f;
        } else {
            int x;
            char c;
            cin >> x >> c;
            (x == 1 && f || x == 2 && !f?dq.push_front(c) : dq.push_back(c));
        }
    }
    if(f){
        while(!dq.empty()){
            cout << dq.front();
            dq.pop_front();
        }
    }else{
        while(!dq.empty()){
            cout << dq.back();
            dq.pop_back();
        }
    }
    cout << endl;
}