#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }

    int ans=0;

    for (int i = 0; i < n; i++)
    {
        if(s[i].length()<=m) {
            m-=s[i].length();
            ans++;
        }
        else {
            break;
        }
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
