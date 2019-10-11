#include<bits/stdc++.h>
using namespace std;
using P = pair<int,int>;
int main(){
    int n,a;
    cin >> n;
    vector<P> v;
    for(int i=1;i<=n;i++){
        cin >> a;
        v.emplace_back(a,i);
    }
    sort(v.begin(), v.end());
    for(auto p: v){
        cout << p.second << " ";
    }
    cout << endl;
}