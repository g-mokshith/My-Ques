/*
Problem: A_><
link: https://atcoder.jp/contests/agc040/tasks/agc040_a
Topic: DP que
*/


#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
using vll=vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() 
{
    string s;
    cin>>s;
    ll n=s.length()+1;
    vll vec(n,0);
    
    for(ll i=1; i<n; ++i)
      if(s[i-1]=='<')
      vec[i]=vec[i-1]+1;
      
    for(ll i=n-1; i>0; --i)  
      if(s[i-1]=='>')
      vec[i-1]=max(vec[i]+1,vec[i-1]);
    
    ll ans=0;
    for(ll i=0; i<n; ++i)
    ans+=vec[i];
    
    cout<<ans;
    return 0;
}
