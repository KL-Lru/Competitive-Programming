#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
using Mat = vector<vl>;
const ll MOD = (1e+9)+7;

Mat dotMod(Mat& mx, Mat& my){
  ll n=mx.size();
  Mat ret(n, vl(n, 0));
  for(int x=0;x<n;x++){
    for(int y=0;y<n;y++){
      for(int i=0;i<n;i++)  
        ret[x][y] = (ret[x][y] + (mx[i][y] * my[x][i]) %MOD) %MOD; 
    }    
  }
  return ret;
}

Mat dotPow(ll p, Mat a){
  ll n = a.size(); p--;
  Mat x (a);
  while(p != 0){
    if(p%2 == 1){ 
      x = dotMod(x, a);
      p -= 1;
    }else{
      a = dotMod(a, a);
      p /= 2;
    }        
  }
  return x;
}

int main(){
  ll n,k;
  cin >> n >> k;
  Mat a(n, vl(n,0));
  for(int x=0;x<n;x++){
    for(int y=0;y<n;y++){
      cin >> a[x][y];
    }
  }
  a = dotPow(k, a);
  ll ans = 0;
  for(int x=0;x<n;x++){
    for(int y=0;y<n;y++){
      ans = (ans + a[x][y]) %MOD;      
    }
  }
  cout << ans << endl;
}