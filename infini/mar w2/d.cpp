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
    char grid[n+5][m+5];
    int cnt=0;
    for(int i=1;i<=n;i++) {
        string s;cin>>s;
        for(int j=1;j<=m;j++){
            grid[i][j]=s[j-1];
            if(grid[i][j]=='1') cnt++;
        }
    }
    if(grid[1][1]=='1') {
        cout << -1 << '\n';
        return;
    }
    cout << cnt << '\n';
    for(int i=n;i>=1;i--) {
        for(int j=m;j>1;j--) {
            if(grid[i][j]=='1') {
                cout << i << ' ' << j-1 << ' ' << i << ' ' << j << '\n';
            }
        }
    }
    for(int i=n;i>1;i--) {
        if(grid[i][1]=='1') {
            cout << i-1 << ' ' << 1 << ' ' << i << ' ' << 1 << '\n';
        }
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
