#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    bool ketemu_p=false;
    bool ketemu_s=false;
    for (int i = (s[0]=='s' ? 1 : 0); i < (s[n-1]=='p' ? n-1 : n); i++)
    {
        if(s[i]=='p') {
            ketemu_p=true;
            if(ketemu_s==true) {
                cout << "NO" << '\n';
                return;
            }
        }
        if(s[i]=='s') {
            ketemu_s=true;
            if(ketemu_p==true) {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
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
