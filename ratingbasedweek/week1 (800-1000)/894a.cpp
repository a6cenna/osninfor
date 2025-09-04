#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;cin>>s;
    int n=s.length();
    vector<int> pre(n+1, 0);
    vector<int> suf(n+2, 0);
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1]+(s[i-1]=='Q');
    }
    for(int i=n;i>=1;i--) {
        suf[i]=suf[i+1]+(s[i-1]=='Q');
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(s[i-1]=='A') ans+=pre[i]*suf[i];
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
