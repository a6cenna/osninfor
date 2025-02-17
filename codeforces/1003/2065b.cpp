#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;cin>>s;
    int has=true;
    for(int i=0;i<s.length()-1;i++) {
        if(s[i]==s[i+1]) {
            cout << 1 << '\n';
            return;
        }
    }

    cout << s.length() << '\n';
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
