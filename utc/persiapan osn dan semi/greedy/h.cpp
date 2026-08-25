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
    int n,m,k;cin>>n>>m>>k;
    vector<pii> a;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        a.pb({x-k,x+k});
    }
    sort(a.begin(),a.end());
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b,b+m);
    int cur=0;
    int ans=0;
    for(int i=0;i<n&&cur<m;i++) {
        while(cur+1<m&&b[cur]<a[i].fs) cur++;
        if(b[cur]>=a[i].fs&&b[cur]<=a[i].sc) {
            ans++;
            cur++;
        }
    }

    cout  << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
