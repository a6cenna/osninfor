#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x;cin>>x;
    // while(x>0) {
    //     x-=33;
    // }
    cout << (x%33==0 ? "YES" : "NO") << '\n';
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
