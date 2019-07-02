#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,cnt=0;
    bool f[100001]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(f[a]) cnt++;
        else f[a]=true;
    }
    cout<<cnt<<endl;
    return 0;
}