#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,a,b;cin>>n>>a>>b;
    if(abs(b-a)%2!=0) {
        cout << "NO" <<'\n';
    }
    else {
        cout << "YES" << '\n';
    }
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
