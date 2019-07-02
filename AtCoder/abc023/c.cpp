#include<bits/stdc++.h>
using namespace std;
#define max 100001

int main(){
    int R,C,k,n;
    cin>>R>>C>>k>>n;
    int r[max],c[max];
    int h[max],v[max],hcount[max],vcount[max];
    for(int i=0;i<=max;i++){
        h[i]=0;hcount[i]=0;
        v[i]=0;vcount[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>r[i]>>c[i];
        h[r[i]-1]++;
        v[c[i]-1]++;
    }
    for(int i=0;i<R;i++) hcount[h[i]]++;
    for(int i=0;i<C;i++) vcount[v[i]]++;
    
    long long ans=0;
    for(int i=0;i<=n;i++){
        ans+=hcount[i]*vcount[k-i];
    }
    for(int i=0;i<n;i++){
        if(h[r[i]-1]+v[c[i]-1]==k)ans--;
        if(h[r[i]-1]+v[c[i]-1]==k+1)ans++;
    }
    cout<<ans<<endl;
    return 0;
}