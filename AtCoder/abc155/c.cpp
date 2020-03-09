#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> m;
    string s;

    for(int i=0;i<n;i++){
        cin >> s;
        m[s]++;
    }
    vector<pair<int , string>> v;
    for(auto p: m){
        v.push_back({p.second, p.first});
    }
    sort(v.begin(), v.end(), [](const pair<int, string> x, const pair<int, string> y){
        if (x.first != y.first) return x.first > y.first;
        else return x.second < y.second;
    });
    int buf = v[0].first;
    for(auto p: v){
        if(p.first != buf) break;
        cout << p.second << endl;
    }
}