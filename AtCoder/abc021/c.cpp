#include<bits/stdc++.h>
using namespace std;
#define nmax 100
#define md 1000000007
#define ll long long
#define inf 100000
ll ln[nmax+1][nmax+1];
int n,m,a,b;
ll tt[nmax+1]={0};

ll calc(int num){
    ll cnt=0;
    if(ln[num][b]==1&&ln[a][b]==ln[a][num]+1) return 1;
    if(tt[num]!=0)return tt[num];
    for(int i=0;i<=n;i++){
        if(ln[num][i]==1&&ln[a][i]==ln[a][num]+1)cnt=(cnt+calc(i))%md;
    }
    tt[num]=cnt;
    return cnt;
}

int main(){
    int x,y;
    ll cnt,mi=inf;
    ll ans=0;
    cin>>n>>a>>b>>m;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++) {
            if(i==j)ln[i][j]=0;
            else ln[i][j]=inf;
        }
    for(int i=0;i<m;i++){
        cin>>x>>y;
        ln[x][y]=1;
        ln[y][x]=1;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                ln[i][j]=min(ln[i][j],ln[i][k]+ln[k][j]);
    cout<<calc(a)<<endl;
    return 0;
}

