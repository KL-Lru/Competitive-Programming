#include<bits/stdc++.h>
using namespace std;
int main(){
    bool n=false,s=false,w=false,e=false;
    string S;
    cin>>S;
    for(int i=0;i<S.size();i++){
        switch(S[i]){
            case 'N': n=true;break;
            case 'S': s=true;break;
            case 'W': w=true;break;
            case 'E': e=true;break;
        }
    }
    cout<<(n==s&&w==e?"Yes":"No")<<endl;
    return 0;
}