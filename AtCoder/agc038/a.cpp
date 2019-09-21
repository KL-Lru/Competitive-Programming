#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int h,w,a,b;
    cin >> h >> w >> a >> b;
    for(int x = 0; x<h; x++){
        for(int y = 0; y< w; y++){
            if(x < b && y < a){
                cout << 1;
            }else if(x < b || y < a){
                cout << 0;
            }else{
                cout << 1;
            }
        }
        cout << endl;
    }
}