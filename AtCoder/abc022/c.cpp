#include<bits/stdc++.h>
using namespace std;
#define nmax 300
#define inf 10000000000
#define ll long long

int main(){
    int n,m;
    ll ln[nmax+1][nmax+1];
    int u,v,l;
    ll ans=inf;
    cin>>n>>m;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++) {
            if(i==j)ln[i][j]=0;
            else ln[i][j]=inf;
        }
    for(int i=0;i<m;i++){
        cin>>u>>v>>l;
        ln[u][v]=l;
        ln[v][u]=l;
    }
    for(int k=2;k<=n;k++)
        for(int i=2;i<=n;i++)
            for(int j=2;j<=n;j++)
                ln[i][j]=min(ln[i][j],ln[i][k]+ln[k][j]);
    for(int i=2;i<=n;i++){
        if(ln[1][i]<inf) 
            for(int j=i+1;j<=n;j++)
                if(ln[1][j]<inf)
                    ans=min(ans,ln[1][i]+ln[1][j]+ln[i][j]);
    }
    if(ans==inf)cout<<-1<<endl;
    else cout<<ans<<endl;
}

