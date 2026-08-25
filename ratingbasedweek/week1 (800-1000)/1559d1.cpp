// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N=1e4+5;

int par[3][N];

int root(int x, int y) {
    return (par[x][y]==y?y:par[x][y]=root(x, par[x][y]));
}

void merge(int num, int x, int y) {
    int a=root(num, x);
    int b=root(num, y);

    if(a==b) return;
    par[num][b]=a;
}

void solve() {
    int n,m,k;cin>>n>>m>>k;
    for(int i=1;i<=n;i++) {
        par[1][i]=i;
        par[2][i]=i;
    }
    while(m--) {
        int u,v;cin>>u>>v;
        merge(1, u, v);
    }
    while(k--) {
        int u,v;cin>>u>>v;
        merge(2, u, v);
    }
    vector<pii> ans;
    for(int i=1;i<=n;i++) {
        for(int j=i+1;j<=n;j++) {
            // cout << root(1, i) << ' ' << root(1, j) << " dbg\n";
            if(root(1, i)!=root(1, j)&&root(2, i)!=root(2, j)) {
                merge(1,i,j);
                merge(2,i,j);
                ans.pb({i,j});
            }
        }
    }
    cout << ans.size() << '\n';
    for(auto x:ans) {
        cout << x.fs << ' ' << x.sc << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
