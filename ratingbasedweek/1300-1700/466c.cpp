// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int> pre(n+1, 0);
    vector<int> suf(n+2, 0);
    vector<int> cnt(n+1, 0);
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1]+a[i];
    }
    for(int i=n;i>=1;i--) {
        suf[i]=suf[i+1]+a[i];
    }
    if(pre[n]%3!=0) {
        cout << 0 << '\n';
        return;
    }
    int sum=pre[n]/3;

    for(int i=n;i>=1;i--) {
        if(suf[i]==sum) cnt[i]=1;
    }
    for(int i=n-1;i>=1;i--) cnt[i]+=cnt[i+1];
    int ans=0;
    for(int i=1;i<=n-2;i++) {
        if(pre[i]==sum) ans+=cnt[i+2];
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
