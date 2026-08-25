// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n,k;cin>>n>>k;
    pii tmp[k];
    for(int i=0;i<k;i++) cin>>tmp[i].fs;
    for(int i=0;i<k;i++) cin>>tmp[i].sc;
    vector<int> pos(n+1,INT_MAX);
    for(auto x:tmp) {
        pos[x.fs]=x.sc;
    }
    vector<int> pref(n+1,INT_MAX);
    vector<int> suff(n+2,INT_MAX);
    for(int i=1;i<=n;i++) {
        pref[i]=min(pref[i-1]+1, pos[i]);
    }
    for(int i=n;i>=1;i--) {
        suff[i]=min(suff[i+1]+1, pos[i]);
    }
    for(int i=1;i<=n;i++) {
        cout << min(pref[i],suff[i]) << ' ';
    }
    cout << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
