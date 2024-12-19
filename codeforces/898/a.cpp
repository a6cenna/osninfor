#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    if(s[0]=='a'||s[1]=='b'||s[2]=='c'){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
