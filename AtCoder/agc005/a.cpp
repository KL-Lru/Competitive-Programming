#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;

    //input
    cin>>x;

    //calculation answer
    int s_count=0,t_count=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='S') s_count++;
        else if(x[i]=='T'){
            if(s_count!=0) s_count--;
            else t_count++;
        }
    }
    cout<<s_count+t_count<<endl;
    return 0;
}