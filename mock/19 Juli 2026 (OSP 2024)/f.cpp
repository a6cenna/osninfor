#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void solve() {
    int n,m;cin>>n>>m;
    int mn=min(n,m),mx=max(n,m);
    int ans=((1+mx)*mx)/2;
    int cur=mx+2;
    for(int i=0;i<mn-1;i++) {
        ans+=cur;
        cur+=2;
    }

    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
