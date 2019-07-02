#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
int t[5][5],x[5][5];
int n,k;

int dxor(int d,int s,int y){
    if(d+1==n){
        return t[d][s]^y;
    }else{
        int a=inf;
        for(int i=0;i<k;i++)
            a=min(a,dxor(d+1,i,y^t[d][s]));
        return a;
    }
}

int allxor(){
    int a=inf;
    for(int i=0;i<k;i++)
        a=min(a,dxor(0,i,0));
    return a;
}


int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
    for(int j=0;j<k;j++)cin>>t[i][j];
    cout<<(allxor()==0?"Found":"Nothing")<<endl;
    return 0;
}