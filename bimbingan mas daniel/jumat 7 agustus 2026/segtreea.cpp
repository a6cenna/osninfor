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

const int N=3e4;

vector<int> segtree(4*N+5), a(N+5);

void build(int cur, int l, int r) {
    if(l==r) {
        segtree[cur]=0;
        return;
    }
    int mid=(l+r)/2;
    build(cur*2, l, mid);
    build(cur*2+1, mid+1, r);

    segtree[cur]=segtree[cur*2]+segtree[cur*2+1];
}

void update(int cur, int l, int r, int idx, int val) {
    if(l>idx||r<idx) return;
    if(l==r) {
        segtree[cur]=val;
        return;
    }
    int mid=(l+r)/2;
    update(cur*2, l, mid, idx, val);
    update(cur*2+1, mid+1, r, idx, val);

    segtree[cur]=segtree[cur*2]+segtree[cur*2+1];
}

int query(int cur, int l, int r, int ql, int qr) {
    if(l>qr||r<ql) return 0;
    if(r<=qr&&l>=ql) return segtree[cur];

    int mid=(l+r)/2;
    return query(cur*2, l, mid, ql, qr)+query(cur*2+1, mid+1, r, ql, qr);
}

void solve() {
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];

    build(1, 1, n);
    int q;cin>>q;
    map<int, vector<pii>> mp;
    vector<int> ans(q+1);
    for(int i=1;i<=q;i++) {
        int l,r;cin>>l>>r;
        mp[r].pb({i, l});
    }
    map<int,int> lst;
    int cur_r=1;
    for(auto [r, il]:mp) {
        for(int i=cur_r;i<=r;i++) {
            if(lst.count(a[i])) {
                update(1, 1, n, lst[a[i]], 0);
            }

            update(1, 1, n, i, 1);
            lst[a[i]]=i;
        }
        cur_r=r+1;
        for(auto [i,l]:il) {
            ans[i]=query(1,1,n,l,r);
        }
    }

    for(int i=1;i<=q;i++) {
        cout << ans[i] << '\n';
    }
}

int main() {
    war_without_reason

    solve();
}
