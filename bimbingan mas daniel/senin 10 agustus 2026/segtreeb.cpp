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
#define ti3 tuple<int,int,int>

const int N=3e4;

vector<int> a(N+5), st(4*N+5);
// vector<vector<int>> st(4*N+5);

void build(int cur, int l, int r) {
    if(l==r) {
        st[cur]=1;
        return;
    }
    int mid=(l+r)/2;
    build(cur*2, l, mid);
    build(cur*2+1, mid+1, r);
    st[cur]=st[cur*2]+st[cur*2+1];
}

void update(int cur, int l, int r, int idx) {
    if(l>idx||r<idx) return;
    if(l==r) {
        st[cur]=0;
        return;
    }
    int mid=(l+r)/2;
    update(cur*2, l, mid, idx);
    update(cur*2+1, mid+1, r, idx);
    st[cur]=st[cur*2]+st[cur*2+1];
}

int query(int cur, int l, int r, int ql, int qr) {
    if(r<ql||l>qr) return 0;
    if(l>=ql&&r<=qr) return st[cur];
    int mid=(l+r)/2;
    return query(cur*2, l, mid, ql, qr)+query(cur*2+1, mid+1, r, ql, qr);
}
 
void solve() {
    int n;cin>>n;
    vector<pii> a_idx(n); // elemen a[i] sama index aslinya
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        a_idx[i-1]={a[i], i};
    }
    sort(a_idx.begin(), a_idx.end());
    build(1, 1, n);
    int q;cin>>q;
    vector<int> ans(q+1);
    map<int,vector<ti3>> mp; // k, (l,r,index)
    for(int i=1;i<=q;i++) {
        int l,r,k;cin>>l>>r>>k;
        mp[k].pb({l,r,i});
    }
    int cur=0;
    for(auto [k, v]:mp) {
        for(int i=cur;i<n;i++) {
            if(a_idx[i].fs>k) break;
            update(1,1,n,a_idx[i].sc);
            cur=i;
        }
        // cout << "bnyk yang 1: " << query(1,1,n,1,n) << '\n';
        for(auto [l,r,i]:v) {
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
