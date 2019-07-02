#include<bits/stdc++.h>
using namespace std;
#define nmax 200000
#define ll long long
int main(){
int n;
int a[nmax];
ll sum=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
ll s=a[0],r=sum-s;
ll ans=abs(r-s);
for(int i=1;i<n-1;i++){
    s+=a[i];r-=a[i];
    ans=min(abs(ans),abs(r-s));
}
cout<<ans<<endl;
return 0;
}