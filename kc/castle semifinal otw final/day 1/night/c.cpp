// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    string sub;cin>>sub;
    int n,k;cin>>n>>k;
    vector<pii> v;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        v.pb({x, i});
    }
    sort(v.begin(), v.end());
    int a[n];
    for(int i=0;i<n;i++) {
        a[v[i].sc]=i;
    }
    vector<pii> group;
    int l=0;
    int cur=-1;
    for(int i=0;i<n;i++) {
        cur=max(cur, a[i]);
        if(cur==i) {
            if(i!=l)group.pb({l, i});
            l=i+1;
        }
    }
    int ans=0;
    for(auto g:group) ans+=g.sc-g.fs+1;
    if(k>=group.size()) {
        cout << ans+k-group.size() << '\n';
        return;
    }
    vector<int> jarak;
    for(int i=1;i<group.size();i++) {
        jarak.pb(group[i].fs-group[i-1].sc-1);
    }
    sort(jarak.begin(), jarak.end());
    for(int i=0;i<group.size()-k;i++) ans+=jarak[i];
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
