#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,a,b,c,d;
    string s;
    cin >> n >> a >> b >> c >> d >> s;
    a--;b--;c--;d--;

    // ##があるかチェック
    int breaker = 0;
    for(int x = a;x <= c; x++){
        if(breaker >= 2) break;
        else if(s[x] == '#') breaker++;
        else breaker = 0;
    }
    for(int x = b;x <= d; x++){
        if(breaker >= 2) break;
        else if(s[x] == '#') breaker++;
        else breaker = 0;
    }

    if(c < d){
        if(breaker >= 2) cout << "No" << endl;
        else cout << "Yes" << endl;
    }else{
        int dots = 0;
        for(int x = b-1;x <= d+1; x++){
            if(dots >= 3) break;
            else if(s[x] == '.') dots++;
            else dots = 0;
        }

        if(breaker >= 2) cout << "No" << endl;
        else{
            if(dots >= 3)
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
        }
    }
}
