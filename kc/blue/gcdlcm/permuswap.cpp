#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    // cari selisih dari a[i] dengan i
    // masukin ke array terus cari fpb?
    // coba
    vector<int> diff;
    for (int i = 1; i <= n; i++)
    {
        int x;cin>>x;
        diff.push_back(x-i);
    }
    int ans=diff[0];
    for (int i = 1; i < diff.size(); i++)
    {
        ans=gcd(ans, diff[i]);
    }
    cout << ans << '\n';
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
