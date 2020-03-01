#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> a[i][j];
    int n;
    cin >> n;
    int b;
    for(int x = 0; x < n; x++){
        cin >> b;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(b ==a[i][j]){
                    a[i][j] = -1;
                }
    }
    bool f = false;
    for(int i=0;i<3;i++){
        // 横
        if(a[i][0] == a[i][1] && a[i][1] == a[i][2])
            f = true;        
        // 縦
        if(a[0][i] == a[1][i] && a[1][i] == a[2][i])
            f = true;
    }
    // ナナメ
    if(a[0][0] == a[1][1] && a[1][1] == a[2][2]) f = true;
    if(a[2][0] == a[1][1] && a[1][1] == a[0][2]) f = true;
    cout << (f?"Yes":"No") << endl;
}