#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    long long ans = 0;
    for (int d = -(n - 1); d <= (n - 1); d++)
    {
        vector<int> values;
        if (d >= 0)
        {
            for (int i = 0; i < n - d; i++)
            {
                int j = i + d;
                values.push_back(a[i][j]);
            }
        }
        else
        {
            for (int i = -d; i < n; i++)
            {
                int j = i + d;
                values.push_back(a[i][j]);
            }
        }
        long long curr = 0;
        for (int k = 0; k < values.size(); k++)
        {
            int need = max(0LL, -values[k] - curr);
            if (need > 0)
            {
                ans += need;
                curr += need;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
