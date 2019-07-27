#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e+9 +7 ;
int main(){
    string s;
    cin >> s;
    ll dp[100003][13] = {};
    ll del = 1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == '?'){
            if(i == s.size()-1){
                for(int j = 0;j<10;j++)
                    dp[i][j] = 1;
            }else{
                for(int k=0;k<10;k++){
                    for(int j = 0;j<13;j++){
                        int rem = (((del*(k))%13) + j)%13;
                        dp[i][rem] = (dp[i][rem] + dp[i+1][j]) %MOD;
                    }
                }
            }
        }else{
            if(i == s.size()-1){
                dp[i][(s[i]-'0')%13]++;
            }else{
                for(int j = 0;j<13;j++){
                    // 前の桁までの余りがjであるときにこの桁ではいくつ余るか
                    int rem = (((del*(s[i]-'0'))%13)+j)%13;
                    dp[i][rem] = (dp[i][rem] + dp[i+1][j]) %MOD;
                }
            }
        }
        del = (del*10)%13;
    }
    cout << dp[0][5] << endl;
}