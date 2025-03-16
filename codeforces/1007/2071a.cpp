#include <bits/stdc++.h>

using namespace std;

void solve() {
    int k;cin>>k;
    cout << ((k-1)%3==0?"YES\n":"NO\n");
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
