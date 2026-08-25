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

int par[100005];
int sz[100005];

int ans=LLONG_MIN/2;
int cnt;

int root(int x) {
    return(par[x]==x?x:par[x]=root(par[x]));
}

void merge(int x, int y) {
    int a=root(x),b=root(y);
    if(a==b) return;
    if(sz[a]>sz[b]) swap(a,b);
    sz[b]+=sz[a];
    par[a]=b;
    ans=max(ans, sz[b]);
    cnt--;
}

void solve() {
    int n,m;cin>>n>>m;
    cnt=n;
    for(int i=1;i<=n;i++) {
        par[i]=i;
        sz[i]=1;
    }
    while(m--) {
        int x,y;cin>>x>>y;
        merge(root(x), root(y));

        cout << cnt << ' ' << ans << '\n';
    }
}

signed main() {
    war_without_reason

    solve();
}
