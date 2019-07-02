    #include<bits/stdc++.h>
    using namespace std;
    #define inf LLONG_MAX/10
    #define ll long long
    ll h,w,t;
    ll sx,sy,gx,gy;
    char s[10][10];
    ll d[100][100];
     
    ll jud(ll x){
        for(int i=0;i<h*w;i++)
            for(int j=0;j<h*w;j++)
                d[i][j]=i==j?0:inf;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++){
                if(i!=0)if(s[i-1][j]=='#') d[i*w+j][(i-1)*w+j]=x;
                        else d[i*w+j][(i-1)*w+j]=1;
                if(i!=h-1)if(s[i+1][j]=='#') d[i*w+j][(i+1)*w+j]=x;
                        else d[i*w+j][(i+1)*w+j]=1;
                if(j%w!=0)if(s[i][j-1]=='#') d[i*w+j][i*w+j-1]=x;
                        else d[i*w+j][i*w+j-1]=1;
                if(j%w!=w-1)if(s[i][j+1]=='#') d[i*w+j][i*w+j+1]=x;
                        else d[i*w+j][i*w+j+1]=1;
            }
        for(int k=0;k<h*w;k++)
            for(int i=0;i<h*w;i++)
                for(int j=0;j<h*w;j++)
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
        return d[sx*w+sy][gx*w+gy]-t;
    }
     
    int main(){
        cin>>h>>w>>t;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++){
                cin>>s[i][j];
                if(s[i][j]=='S'){sx=i;sy=j;}
                if(s[i][j]=='G'){gx=i;gy=j;}
            }
        ll hi=t,lo=1;
        while(hi!=lo+1){
            ll ju=jud((hi+lo)/2);
            if(ju<=0)lo=(hi+lo)/2;
            else hi=(hi+lo)/2;
        }
        cout<<lo<<endl;
        return 0;
    }