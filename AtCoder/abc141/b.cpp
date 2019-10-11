#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool f = true;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            if (s[i] == 'L'){
                f = false;
            }
        }else{
            if (s[i] == 'R'){
                f = false;
            }
        }
    }
    cout << (f?"Yes":"No") << endl;
}