#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=0,nmax=0;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>max){nmax=max;max=a;}
        else if(a>nmax&&a!=max)nmax=a;
    }
    cout<<nmax<<endl;
    return 0;
}