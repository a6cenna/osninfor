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
    int r,c;cin>>r>>c;
    char grid[r+1][c+1];
    set<int> row,col;
    for(int i=1;i<=r;i++) {
        for(int j=1;j<=c;j++) {
            cin>>grid[i][j];
            if(grid[i][j]=='S') {
                row.insert(i);
                col.insert(j);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=r;i++) {
        if(row.count(i)) continue;
        for(int j=1;j<=c;j++) {
            if(grid[i][j]=='.') {
                ans++;
                grid[i][j]=',';
            }
        }
    }
    for(int i=1;i<=c;i++) {
        if(col.count(i)) continue;
        for(int j=1;j<=r;j++) {
            if(grid[j][i]=='.') {
                ans++;
                grid[j][i]=',';
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
