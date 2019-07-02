    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main(){
      ll n,t,a,b,ans=0;
      cin>>n>>t>>b;
      ans+=t;
      for(int i=0;i<n-1;i++){
        cin>>a;
        ans+=(t<a-b?t:a-b);
        b=a;
      }
      cout<<ans<<endl;
      return 0;
    }