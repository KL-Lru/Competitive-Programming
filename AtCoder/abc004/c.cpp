#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rp=n/5,mp=n%5;
    int c[6];
    switch(rp%6){
        case 0:c[0]=1;break;
        case 1:c[0]=2;break;
        case 2:c[0]=3;break;
        case 3:c[0]=4;break;
        case 4:c[0]=5;break;
        case 5:c[0]=6;break;
    }
    for(int i=1;i<6;i++)
        c[i]=(c[0]+i)%6==0?6:(c[0]+i)%6;
    bool f=true;
    for(int i=0;i<6;i++){
        if(mp==i){
            cout<<c[0];
            f=false;
        }else{
            if(f) cout<<c[i+1];
            else cout<<c[i];
        }
    }
    cout<<endl;
    return 0;
}