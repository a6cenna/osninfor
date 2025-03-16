#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<long long> pre(n+1, 0);
    vector<long long> suf(n+2, 0);
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1];
        if(a[i-1]>0) pre[i]+=a[i-1];
    }
    for(int i=n;i>=1;i--) {
        suf[i]=suf[i+1];
        if(a[i-1]<0) suf[i]+=-a[i-1];
    }
    long long ans=LLONG_MIN;
    for(int i=0;i<=n;i++) {
        ans=max(ans, pre[i]+suf[i+1]);
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
