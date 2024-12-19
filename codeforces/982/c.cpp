#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
     ll n;
        cin >> n;
        vector<ll> a(n + 1); // 1-based indexing
        for (ll i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        ll len = n;
        set<ll> positions; // Positions where operations can be performed
        vector<bool> used(n + 1, false); // To mark used positions

        // Initially, check all positions
        for (ll i = 2; i <= n; ++i) {
            if (a[i] == len + 1 - i) {
                positions.insert(i);
            }
        }

        while (!positions.empty()) {
            // Perform operation at the position with the smallest index
            ll i = *positions.begin();
            positions.erase(positions.begin());
            if (used[i]) continue; // Skip if already used

            used[i] = true;
            len += i - 1;

            // After length changes, check if new positions can perform operations
            for (ll j = 2; j <= len; ++j) {
                if (j > n && used[j]) continue;
                if (!used[j] && a[j] == len + 1 - j) {
                    positions.insert(j);
                }
            }
        }

        cout << len << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
