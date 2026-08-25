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

const int N=1e6;
int n;

vector<int> pre,st,en;
int h[N];
pii t[2*N];

void build(int i=1, int l=1, int r=n) {
    if(l==r) t[i]={h[l], l};
    else {
        int mid=(l+r)/2;
        build(i*2, l, mid);
        build(i*2+1, mid+1, r);
        t[i]=min(t[i*2], t[i*2+1]);
    }
}

pii query(int x, int y, int i, int l, int r) {
    if(x>r||y<l) return {LLONG_MAX, LLONG_MAX};
    if(l>=x&&r<=y) return t[i];
    int mid=(l+r)/2;
    return min(query(x,y,i*2,l,mid), query(x,y,i*2+1,mid+1,r));
}

void req(int i=0, int l=1, int r=n) {
    if(l>r) return;
    int mid=query(l,r,1,1,n).sc;

    pre.pb((r-l+1)*(h[mid]-i));
    st.pb(l);
    en.pb(r);

    req(h[mid], l, mid-1);
    req(h[mid], mid+1, r);
}

void solve() {
    cin>>n;
    for(int i=1;i<=n;i++) cin>>h[i];
    
    pre.pb(0);
    st.pb(0);
    en.pb(0);

    build();
    req();

    for(int i=1;i<pre.size();i++) pre[i]+=pre[i-1];

    int q;cin>>q;
    while(q--) {
        int k;cin>>k;
        int idx=lower_bound(pre.begin(), pre.end(), k)-pre.begin();
        cout << (k-pre[idx-1]-1)%(en[idx]-st[idx]+1)+st[idx] << '\n';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
