#include<bits/stdc++.h>
using namespace std;
int main(){
char c[4][4];
for(int i=0;i<4;i++)for(int j=0;j<4;j++)cin>>c[i][j];
for(int i=3;i>-1;i--){for(int j=3;j>-1;j--)cout<<c[i][j]<<" ";cout<<endl;}
cout<<endl;
return 0;
}