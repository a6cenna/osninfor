#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;cin>>n;
    long long howmany=1;
    while(n>3) {
        n/=4;
        howmany*=2;
    }

    cout << howmany << '\n';
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
