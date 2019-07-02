#include<bits/stdc++.h>
using namespace std;
const int mx = 100000;
vector<bool> prime(mx + 1, true);
vector<int> cnt_prime(mx + 1, 0);

void sieve(){
  prime[0] = false;
  prime[1] = false;
  for(int i=2;i<=mx;i++){
    cnt_prime[i] = cnt_prime[i-1];
    if(prime[i]){
      int cnt = 2;
      while(cnt * i <= mx) prime[cnt++ * i] = false;
      if(i % 2 == 1 && prime[(i+1)/2]) cnt_prime[i]++;
    }
  }
}

int main(){
  int q;
  cin >> q;
  int l, r;
  sieve();
  for(int i=0;i<q;i++){
    cin >> l >> r;
    cout << cnt_prime[r] - cnt_prime[l-1] << endl;
  }
}