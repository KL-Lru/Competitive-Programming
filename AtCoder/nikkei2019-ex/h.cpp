#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin >> n;
  cout << (n%9%2 || n%9 == 8?"Win":"Lose") << endl;
}

/*
1: W
2: L
3: W
4: L
5: W
6: L
7: W
8: W
9: L
10: W
11: L
12: W
13: L
14: W
15: L
16: W
17: W
18: L
19: W
20: L
21: W
22: L
23: W
24: L
25: W
26: W
27: L

*/
