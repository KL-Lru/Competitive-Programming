#include<bits/stdc++.h>
using namespace std;
#define dmax 10000

int main(){
    int n,d,k;
    int l[dmax],r[dmax];
    int s,t;
    cin>>n>>d>>k;
    for(int i=0;i<d;i++)
        cin>>l[i]>>r[i];
    for(int i=0;i<k;i++){
        cin>>s>>t;
        if(s<t)
            for(int j=0;j<d;j++){
                if(l[j]<=s&&r[j]>=s)
                    s=r[j];
                if(s>=t){
                    cout<<j+1<<endl;
                    break;
                }
            }
        else
            for(int j=0;j<d;j++){
                if(l[j]<=s&&r[j]>=s)
                    s=l[j];
                if(s<=t){
                    cout<<j+1<<endl;
                    break;
                }
            }
    }
    return 0;    
}