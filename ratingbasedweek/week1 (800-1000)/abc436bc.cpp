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
    int n;cin>>n;
    int grid[n][n];
    memset(grid, -1, sizeof(grid));
    grid[0][(n-1)/2]=1;
    int r=0,c=(n-1)/2;
    for(int i=2;i<=n*n;i++) {
        if(grid[(r-1+n)%n][(c+1)%n]==-1) {
            r=(r-1+n)%n;
            c=(c+1)%n;
            grid[r][c]=i;
        }
        else {
            r=(r+1)%n;
            grid[r][c]=i;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
