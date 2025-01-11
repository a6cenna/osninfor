#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,h;cin>>n>>h;
    int ans=n;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x>h) ans++;
    }

    cout <<ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
