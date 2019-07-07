#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> mount(n, 0);
    ll mp = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i%2 == 0){
            mp += a[i];
        }else{
            mp -= a[i];
        }
    }

    mount[0] = mp;
    for(int p=1;p<n;p++){
        mount[p] = 2*(a[p-1] - (mount[(p-1)]/2));
    }
    for(int i=0;i<n;i++){
        cout << mount[i] << " ";
    }
    cout << endl;
}
