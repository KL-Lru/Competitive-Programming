#include<bits/stdc++.h>
using namespace std;
#define ll long long
class pa{
    public:
    int num;
    int count;
    pa(int a,int b){
        num=a;
        count=b;
    };
};

bool operator< (const pa &p1,const pa &p2) {
    return (p1.num >  p2.num);
}
 
int main(){
    ll n,k,a,b;
    priority_queue<pa> q;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        q.push(pa(a,b));
    }
    ll count=0;
    for(int i=0;i<n;i++){
        pa p=q.top();
        count+=p.count;
        if(count>=k){
            cout<<p.num<<endl;
            break;
        }
        q.pop();
    }
    return 0;
}