#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w,n;
    int a;
    int x=0,y=0,cnt=0;
    int cl[100][100];
    cin>>h>>w>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        while(cnt<a){
            cl[x][y]=i+1;
            x+=y%2==0?1:-1;
            if(x>=w||x<0){
                y++;x=y%2==0?0:w-1;
            }
            cnt++;
        }
        cnt=0;
    }
    for(int j=0;j<h;j++)
        for(int i=0;i<w;i++)
            cout<<cl[i][j]<<(i==w-1?"\n":" ");
    return 0;
}