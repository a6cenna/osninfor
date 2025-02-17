#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;cin>>s;
    string s1=s.substr(0, s.length()-2);
    cout << s1 << 'i' << '\n';
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
