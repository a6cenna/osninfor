// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    vector<vector<int>> v(2e5+5);
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        v[x].pb(i+1);
    }
    int q;cin>>q;
    while(q--) {
        int l,r,x;cin>>l>>r>>x;
        cout << upper_bound(v[x].begin(), v[x].end(),r)-lower_bound(v[x].begin(), v[x].end(), l) << '\n';
    }
}

signed main() {
    war_without_reason

    solve();
}
