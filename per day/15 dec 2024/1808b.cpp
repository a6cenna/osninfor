#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; i++)
        {
            cin>>a[i][j];
        }
    }
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
