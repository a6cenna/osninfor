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

int segtree[4*N+5];
int a[N+5];

void build(int n) {
    for(int i=1;i<=n;i++) segtree[n+i-1]=a[i];
    for(int i=n-1;i>=1;i--) segtree[i]=__gcd(segtree[i<<1],segtree[i<<1|1]);
}

int query(int l, int r, int n) {
    int res=0;
    l+=n-1;
    r+=n-1;
    while(l<=r) {
        if(l&1) res=gcd(res,segtree[l++]);
        if(!(r&1)) res=gcd(res,segtree[r--]);
        l>>=1;r>>=1;
    }

    return res;
}

void solve() {
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    build(n);

    int ans=0;
    int l=1;
    for(int r=1;r<=n;r++) {
        int cur=query(l,r,n);
        while(l<=r&&cur<r-l+1) {
            l++;
            if(l>r) break;
            cur=query(l,r,n);
        }
        if(l<=r&&cur==r-l+1) ans++;
    }

    cout << ans << '\n';
}

int main() {
    war_without_reason

    solve();
}
