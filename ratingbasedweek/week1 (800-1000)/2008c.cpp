#include <bits/stdc++.h>

using namespace std;

void solve() {
    int l,r;cin>>l>>r;
    int ans=1;
    int add=1;
    while(l+add<=r) {
        ans++;
        l+=add;
        add++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
