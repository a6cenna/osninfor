// author: sofwant || a6cenna

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
    set<int> st;
    int grid[n+1][n+1];
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin>>grid[i][j];
            st.insert(grid[i][j]);
        }
    }
    for(int i=1;i<=2*n;i++) {
        if(!st.count(i)) cout << i << ' ';
    }
    for(int i=1;i<=n;i++) {
        cout << grid[i][1] << ' ';
    }
    for(int i=2;i<=n;i++) {
        cout << grid[n][i] << ' ';
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
