#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    c=b-(a%b);
    cout<<(c==b?0:c)<<endl;
    return 0;
}