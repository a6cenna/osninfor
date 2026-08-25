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
    vector<pii> v; // waktu dibutuhin, deadline
    for(int i=0;i<n;i++) {
        int a,d;cin>>a>>d;
        v.pb({a,d});
    }
    sort(v.begin(), v.end());
    int ans=0;
    int cur=0;
    for(int i=0;i<n;i++) {
        cur+=v[i].fs;
        ans+=v[i].sc-cur;
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
