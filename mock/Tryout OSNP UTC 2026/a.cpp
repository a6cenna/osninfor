#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    int mx=LLONG_MIN/2,mn=LLONG_MAX/2;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mn=min(mn, a[i]);
        mx=max(mx, a[i]);
    }

    // cout << mx << ' ' << mn << '\n';
    // int ans=0;

    for(int i=0;i<n;i++) {
        // ans+=max(abs(a[i]-mx), abs(a[i]-mn));
        cout << max(abs(a[i]-mx), abs(a[i]-mn)) << '\n';
    }
    // cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
10
3 1 4 1 5 9 2 6 5 3
*/
