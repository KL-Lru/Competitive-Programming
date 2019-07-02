#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> l(200);
    cin>>n;
    for(int i=0;i<2*n;i++)
        cin>>l[i];
    sort(l.begin(),l.begin()+2*n);
    int x=0;
    for(int i=0;i<2*n;i+=2)
        x+=min(l[i],l[i+1]);
    cout<<x<<endl;
    return 0;
}