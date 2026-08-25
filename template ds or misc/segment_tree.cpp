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

const int N=3e5;

vector<int> segtree(4*N+5), a(N+5);

void build(int cur, int l, int r) {
    if(l==r) {
        segtree[cur]=a[l];
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
        segtree[cur]+=val;
        return;
    }
    int mid=(l+r)/2;
    update(cur*2, l, mid, idx, val);
    update(cur*2+1, mid+1, r, idx, val);

    segtree[cur]=segtree[cur*2]+segtree[cur*2+1];
}

int query(int cur, int l, int r, int ql, int qr) {
    if(l>qr||r<ql) return 0;
    if(l>=ql&&r<=qr) return segtree[cur];

    int mid=(l+r)/2;
    return query(cur*2, l, mid, ql, qr)+query(cur*2+1, mid+1, r, ql, qr);
}

void solve() {
    int n;cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    build(1, 1, n);
    int q;cin>>q;
    while(q--) {
        int tipe;cin>>tipe;
        if(tipe==0) {
            int idx,val;cin>>idx>>val;
            update(1, 1 , n, idx, val);
        }
        else {
            int l,r;cin>>l>>r;
            cout << query(1, 1, n, l, r) << '\n';
        }
    }
}

int main() {
    war_without_reason

    solve();
}
