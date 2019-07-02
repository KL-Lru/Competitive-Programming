#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,cnt=0,su=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>0){su+=a;cnt++;}
    }
    cout<<ceil(su/(double)cnt)<<endl;
    return 0;
}