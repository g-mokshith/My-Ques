/*
Problem: C_Switches
link: https://atcoder.jp/contests/abc128/tasks/abc128_c
Topic: Bit Masking
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

    ll n,m;
    cin>>n>>m;
    vector<vll>bulbs(m);
    rep(i,0,m){
        ll k;
        cin>>k;
        rep(j,0,k){
            ll x;
            cin>>x;
            bulbs[i].pb(x-1);
        }
    }
    vll p(m);
    rep(i,0,m)
    cin>>p[i];

    ll ans=0;
    rep(mask,0,(1<<n)){
        bool all_lights=true;

        rep(i,0,m){
            ll on_count=0;
            for(ll s:bulbs[i]){
                if(mask & (1<<s)){
                    on_count++;
                }
            }

            if(on_count%2!=p[i]){
                all_lights=false;
                break;
            }
        }

        if(all_lights)
        ans++;
    }
    cout<<ans;
    return 0;
}
