#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    bool possible=true;
    for(int i=1;i<=n;i++) {
        int a;cin>>a;
        if(a<=max(n-i, i-1)*2) possible=false;
    }
    cout << (possible ? "YES" : "NO") << '\n';
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
