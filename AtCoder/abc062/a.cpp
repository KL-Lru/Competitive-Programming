#include<bits/stdc++.h>
using namespace std;
int main(){
int g[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
int x,y;
cin>>x>>y;
cout<<(g[x]==g[y]?"Yes":"No")<<endl;
return 0;
}