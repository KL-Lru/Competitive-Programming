#include<bits/stdc++.h>
using namespace std;
#define a 2025
int main(){
    int n;
    cin>>n;
    n=a-n;
    for(int i=1;i<10;i++)
        if(n%i==0&&n/i<10) cout<<i<<" x "<<n/i<<endl;
    return 0;
}