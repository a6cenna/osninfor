#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    ll n,l,s;cin>>n>>l>>s;
    vector<ll>pre(l+2,0);
    ll ans=0;
    for(int i=0;i<n;i++) {
        ll a,b,s1;cin>>a>>b>>s1;
        pre[a]+=s1;
        pre[b+1]-=s1;
    }
    for(int i=1;i<=l;i++) {
        pre[i]+=pre[i-1];
    }
    for(int i=1;i<=l;i++) {
        if(pre[i]<s) ans++;
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
