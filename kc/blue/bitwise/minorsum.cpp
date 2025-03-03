#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    long ans=0;
    for(int i=0;i<n;i++) {
        long long a;cin>>a;
        ans|=a;
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
