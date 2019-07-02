#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,d=0,cnt=1;
    cin >> n >> x;
    vector<int> l(n);
    for(int i=0;i<n;i++) cin >> l[i];

    for(int i=0;i<n;i++){
        d += l[i];
        if(d <= x)
            cnt++;
        else 
            break;
    }
    cout << cnt << endl;
}

