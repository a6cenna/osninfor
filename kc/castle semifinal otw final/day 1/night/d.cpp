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
const int N=1e5+5;

int par[N];
int cnt[N];

int root(int x) {
    return (par[x]==x?x:par[x]=root(par[x]));
}

void merge(int x, int y) {
    int a=root(x);
    int b=root(y);
    par[b]=a;
    cnt[a]+=cnt[b];
}

void solve() {
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>cnt[i];
    vector<int> msb[31], vis(31, 0);
    for(int i=1;i<=n;i++) {
        par[i]=i;
        for(int j=30;j>=0;j--) {
            if(a[i]&(1<<j)) {
                msb[j].pb(i);
                break;
            }
        }
    }
    for(int i=30;i>=0;i--) {
        for(auto idx:msb[i]) {
            for(int j=i-1;j>=0;j--) {
                if(a[idx]&(1<<j)) continue;
                if(!msb[j].size()) continue;
                if(root(msb[j][0])!=root(idx)) {
                    merge(idx, msb[j][0]);
                    if(!vis[j]) {
                        for(int k=1;k<msb[j].size();k++) {
                            merge(idx, msb[j][k]);
                        }
                        vis[j]=1;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++) {
        cout << cnt[root(i)] << '\n';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
