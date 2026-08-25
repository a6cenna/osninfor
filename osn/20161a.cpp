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

int n,m;
const int N=36+5;
int grid[N][N];
bool vis[N][N];
vector<int> res;
pii dir[4]={{0,1}, {0,-1}, {1,0}, {-1, 0}};

void dfs(int x, int y, int cur) {
    cur+=grid[x][y];
    if(x==n&&y==m) {
        res.pb(cur);
        return;
    }
    else {
        for(int i=0;i<4;i++) {
            int nxt_x=x+dir[i].fs;
            int nxt_y=y+dir[i].sc;
            if(nxt_x<1||nxt_x>n||nxt_y<1||nxt_y>m||vis[nxt_x][nxt_y]) continue;
            vis[nxt_x][nxt_y]=1;
            dfs(nxt_x, nxt_y, cur);
            vis[nxt_x][nxt_y]=0;
        }
    }
}



void solve() {
    string sub;cin>>sub;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>grid[i][j];
        }
    }

    memset(vis, 0, sizeof(vis));
    vis[1][1]=true;
    dfs(1, 1, 0);
    sort(res.begin(), res.end());

    int q;cin>>q;
    while(q--) {
        int l,r;cin>>l>>r;
        int idxl=lower_bound(res.begin(), res.end(), l)-res.begin();
        int idxr=upper_bound(res.begin(), res.end(), r)-res.begin();

        cout << idxr-idxl << '\n';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
