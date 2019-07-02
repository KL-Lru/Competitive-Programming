    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int a,cnt=0;
    bool f=false;
    cin>>a;
    if(a%2==1){a-=1;cnt++;f=true;}
    while(a!=0){a-=2;cnt++;}
    cout<<cnt<<endl;
    if(f){cout<<1<<endl;cnt--;}
    while(cnt!=0){cout<<2<<endl;cnt--;}
    return 0;
    }