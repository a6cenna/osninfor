// author: sofwant || a6cenna

#include <algorithm>
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

int root(int x) {
    return (par[x]==x?x:par[x]=root(par[x]));
}

void merge(int x,int y) {
    int a=root(x);
    int b=root(y);
    if(a==b) return;
    par[b]=a;
}

void solve() {
    int n,m,k;cin>>n>>m>>k;
    int b[n+1];
    int c[m];
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=0;i<m;i++) cin>>c[i];
    for(int i=1;i<=n;i++) par[i]=i;
    for(int i=0;i<k;i++) {
        int p,q;cin>>p>>q;
        merge(p,q);
    }
    vector<vector<int>> g(n+1);
    for(int i=1;i<=n;i++) {
        g[root(i)].pb(b[i]);
    }
    int ans=0;
    sort(c,c+m);
    for(int i=1;i<=n;i++) {
        if(g[i].empty()) continue;
        sort(g[i].begin(), g[i].end());
        int mid=g[i][g[i].size()/2];
        int idx=lower_bound(c,c+m,mid)-c;
        int curr=LLONG_MAX;
        // if(lower_bound(c,c+m,g[i][g[i].size()/2])==c+m);
        if(idx<m&&idx>=0){
            int s=0;
            for(auto x:g[i]) {
                s+=abs(x-c[idx]);
                // cout << s << '\n';
            }
            curr=min(curr, s);
            // cout << curr << "TANDA \n";
        }
        if(idx-1<m&&idx-1>=0) {
            // if(lower_bound(c,c+m,g[i][g[i].size()/2-1])==c+m);
            // else {
                int idx1=idx-1;
                int s1=0;
                for(auto x:g[i]) {
                    s1+=abs(x-c[idx1]);
                    // cout << s1 << '\n';
                }
                // cout << c[idx1];
                curr=min(curr, s1);
                // cout << *lower_bound(c,c+m,g[i][g[i].size()/2-1]) << "WO\n";
            // }
        }
        // cout << curr << '\n';
        ans+=curr;
    }

    // for(int i=1;i<=n;i++) {
    //     if(g[i].empty()) continue;
    //     cout << i << " from \n";
    //     for(auto x:g[i]) {
    //         cout << x << ' ';
    //     }
    //     cout << '\n';
    // }

    // cout << c[lower_bound(c,c+m,g[3][g[3].size()/2])-c] << '\n';
    // cout << *lower_bound(c,c+m,g[2][(g[2].size())/2-1]);
    // cout << g[3][g[3].size()/2] << '\n';

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
