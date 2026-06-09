/*
Problem D: Dice in Line
link: https://atcoder.jp/contests/abc154/tasks/abc154_d
Topic: Sliding Window
*/


#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
using vll=vector<ll>;
using vd=vector<double>;
using vc=vector<char>;
using vs=vector<string>;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define rep(i,a,b) for(ll i=a; i<b; ++i)
#define repe(i,a,b) for(ll i=a; i<=b; ++i)
#define pb push_back
#define all(x) (x).begin(), (x).end()
int main()
{
    fastio;

    ll n,k;
    cin>>n>>k;
    vd v;
    rep(i,0,n){
        double x;
        cin>>x;
        v.pb((x+1)/2.0);
    }
    
    double cur=0;
    rep(i,0,k)
    cur+=v[i];

    double ans=cur;
    rep(i,k,n){
        cur+=v[i];
        cur-=v[i-k];
        ans=max(ans,cur);
    }
    cout<<fixed<<setprecision(12)<<ans;
    return 0;
}
