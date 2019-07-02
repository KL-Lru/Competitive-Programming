#include<bits/stdc++.h>
using namespace std;
#define nmax 50
#define inf 100
#define rinf -100

int main(){
    int n,a[nmax],res[nmax];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        res[i]=rinf;
    }
    int ans=rinf;
    int tmax,amax,ttmp,atmp;
    for(int i=0;i<n;i++){
        tmax=rinf;amax=rinf;
        ttmp=0;atmp=0;
        for(int j=0;i+2*j+1<n;j++){
            ttmp+=a[i+2*j];
            atmp+=a[i+2*j+1];
            if(atmp>amax){
                tmax=ttmp;
                amax=atmp;
            }
        }
        for(int j=1;j<=i;j++){
            ttmp=0;atmp=0;
            int point=i-j;
            for(int k=0;k+point<=i;k++){
                if(k%2==0)
                    ttmp+=a[point+k];
                else
                    atmp+=a[point+k];
            }
            if(atmp>=amax){
                tmax=ttmp;
                amax=atmp;
            }
        }
        if(ans<tmax) {
            ans=tmax;
        }
    }    
    cout<<ans<<endl;
    return 0;
}
