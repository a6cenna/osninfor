#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            dp[i][j] = dp[i][j - 1] + a[j - 1];
        }
    }
    set<int> sums;
    sums.insert(0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            sums.insert(dp[i][j]);
        }
        
    }
    cout << sums.size() << endl;
    for (auto sum: sums) 
    {
        cout << sum << " ";
    }
    cout << '\n';
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
