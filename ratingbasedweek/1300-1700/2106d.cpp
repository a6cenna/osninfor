// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    vector<int> pre(m);
    vector<int> suf(m);
    int idx=0;
    for(int i=0;i<m;i++) {
        while(idx<n&&a[idx]<b[i]) idx++;
        pre[i]=idx;
        idx++;
    }
    idx=n-1;
    for(int i=m-1;i>=0;i--) {
        while(idx>=0&&a[idx]<b[i]) idx--;
        suf[i]=idx;
        idx--;
    }
    if(pre[m-1]<n) {
        cout << 0 << '\n';
        return;
    }
    int ans=INT_MAX;
    for(int i=0;i<m;i++) {
        int prev=(i==0?-1:pre[i-1]);
        int next=(i==m-1?n:suf[i+1]);
        if(next>prev) {
            ans=min(ans, b[i]);
        }
    }
    if(ans!=INT_MAX) cout << ans << '\n';
    else cout << -1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
