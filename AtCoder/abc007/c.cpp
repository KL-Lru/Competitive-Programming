#include<bits/stdc++.h>
using namespace std;
#define max 50
#define inf 100000
#define d 10000
char c[max][max];
int s[max][max];

class node{
    public:
    int y;
    int x;
    int v;
    node(int y,int x,int v){
        this->x=x;
        this->y=y;
        this->v=v;
    };
};


int main(){
    int R,C;
    int sy,sx,gy,gx;
    queue<node> q;
    cin>>R>>C>>sy>>sx>>gy>>gx;
    sy--;sx--;gy--;gx--;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++){
            cin>>c[i][j];
            s[i][j]=c[i][j]=='#'?inf:d;
        }
    q.push(node(sy,sx,0));
    while(!q.empty()){
        node tmp=q.front();
        s[tmp.y][tmp.x]=tmp.v;
        if(s[gy][gx]<d)break;
        if(s[tmp.y-1][tmp.x]==d){q.push(node(tmp.y-1,tmp.x,tmp.v+1));s[tmp.y-1][tmp.x]++;}
        if(s[tmp.y+1][tmp.x]==d){q.push(node(tmp.y+1,tmp.x,tmp.v+1));s[tmp.y+1][tmp.x]++;}
        if(s[tmp.y][tmp.x-1]==d){q.push(node(tmp.y,tmp.x-1,tmp.v+1));s[tmp.y][tmp.x-1]++;}
        if(s[tmp.y][tmp.x+1]==d){q.push(node(tmp.y,tmp.x+1,tmp.v+1));s[tmp.y][tmp.x+1]++;}
        q.pop();
    }
    cout<<s[gy][gx]<<endl;
    return 0;
}