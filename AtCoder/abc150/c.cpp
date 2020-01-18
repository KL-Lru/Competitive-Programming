#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n), p(n), q(n);
    for(int i=0;i<n;i++)
        cin >> p[i];
    for(int i=0;i<n;i++)
        cin >> q[i];
    for(int i=0;i<n;i++)
        x[i] = i+1;
    int a = 0,b = 0;
    int ct = 0;
    do{
        ct++;
        if(p == x) a = ct;
        if(q == x) b = ct;
    }while(next_permutation(x.begin(), x.end()));
    cout << abs(a - b) << endl;
}