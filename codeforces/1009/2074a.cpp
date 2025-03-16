#include <bits/stdc++.h>

using namespace std;

void solve() {
    int l,r,d,u;cin>>l>>r>>d>>u;
    cout << (r==l&&d==u && r==d ? "YES" : "NO") << '\n';
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
