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

const int N=1e5, INF=LLONG_MAX/2;

vector<int> pref(N+5,0), st(4*N+5);

void build(int cur, int l, int r) {
    if(l==r) {
        st[cur]=pref[l];
        return;
    }
    int mid=(l+r)/2;
    build(cur*2, l, mid);
    build(cur*2+1, mid+1, r);
    st[cur]=min(st[cur*2], st[cur*2+1]);
}

int query(int cur, int l, int r, int ql, int qr) {
    if(l>qr||r<ql) return INF;
    if(l>=ql&&qr>=r) return st[cur];
    int mid=(l+r)/2;
    return min(query(cur*2, l, mid, ql, qr), query(cur*2+1, mid+1, r, ql, qr));
}

void solve() {
    int n;cin>>n;
    vector<int> h(n+1),p(n+1);
    int kos=0;
    for(int i=1;i<=n;i++) cin>>h[i];
    for(int i=1;i<=n;i++) {
        cin>>p[i];
        if(p[i]==0) kos++;
    }
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+(h[i]-p[i]);
        // cout << pref[i] << ' ';
    }
    cout << '\n';
    int ans=-INF;
    build(1,0,n);
    for(int r=1;r<=n;r++) {
        // cout << "ini qry: " << query(1,1,n,r-kos,r) << '\n'; 
        ans=max(ans, pref[r]-query(1,0,n,max(r-kos,0LL),r-1));
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
