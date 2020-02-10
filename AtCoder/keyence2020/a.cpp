#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w,n;
    cin >> h >> w >> n;
    cout << (ceil(n/(double)max(h,w))) << endl;
}