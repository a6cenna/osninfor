#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    int ans=a[n-1];

    // if mono do problem ai, stereo will do ai+1
    for(int i=0;i<n-1;i++) {
        if(a[i]>b[i+1]) {
            ans+=a[i]-b[i+1];
        }
    }

    cout << ans << '\n';
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
