#include <bits/stdc++.h>

using namespace std;

void solve() {
    int k;cin>>k;

    cout << 100/gcd(100,k) << '\n';
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
