#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    long long bot=0,top=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='_') bot++;
        else top++;
    }
    cout << (top*(top))/4LL*bot << '\n';
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
