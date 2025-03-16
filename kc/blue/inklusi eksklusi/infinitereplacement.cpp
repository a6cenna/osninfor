#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s,t;cin>>s>>t;
    if(t=="a") {
        cout << 1 << '\n';
        return;
    }
    for(int i=0;i<t.length();i++) {
        if(t[i]=='a' && t.length()>1) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << (long long)pow(2, s.length()) << '\n';
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
