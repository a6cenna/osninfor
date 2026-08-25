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
#define int ll

void solve() {
    int n,m;cin>>n>>m;
    map<pii, int> grid;
    int ans=0;
    while(m--) {
        int r,c;cin>>r>>c;
        if(grid[{r,c}]==0) {
            ans++;
            for(int i=r-1;i<r+2;i++) {
                for(int j=c-1;j<c+2;j++) {
                    grid[{i,j}]=1;
                }
            }
        }
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t=1;
    // cin >> t;

    while(t--) {
        solve();
    }
}
