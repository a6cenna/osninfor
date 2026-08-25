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

void solve() {
    int n,m;cin>>n>>m;
    char grid[n+1][m+1];
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) cin>>grid[i][j];
    }
    for(int i=1;i<=m;i++) {
        int cnt=0;
        for(int j=1;j<=n;j++) {
            if(grid[j][i]=='*') {
                cnt++;
                grid[j][i]='.';
            }
            if(grid[j][i]=='o') {
                for(int k=j-cnt;k<j;k++) {
                    grid[k][i]='*';
                }
                cnt=0;
            }
        }
        if(cnt!=0) {
            for(int j=n-cnt+1;j<=n;j++) {
                grid[j][i]='*';
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) cout << grid[i][j];
        cout << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
