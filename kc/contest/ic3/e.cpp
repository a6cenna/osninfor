// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n,m;cin>>n>>m;
    pii a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].fs;
        a[i].sc=i;
    }
    pii b[m];
    for(int i=0;i<m;i++) cin>>b[i].fs>>b[i].sc;
    sort(a,a+n);
    sort(b,b+m);
    int cur=0;
    int at=0;
    int ans[n];
    for(int i=0;i<n;i++) {
        while(at<m&&a[i].fs>=b[at].fs) {
            cur+=b[at].sc;
            at++;
        }
        ans[a[i].sc]=cur;
    }
    for(int i=0;i<n;i++) {
        cout << ans[i] << ' ';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
