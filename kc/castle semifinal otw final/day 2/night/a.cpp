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
    string sub;cin>>sub;
    int n,m;cin>>n>>m;
    int a[n];
    vector<vector<int>> group(m+1);
    for(int i=0;i<n;i++) {
        int c,w;cin>>c>>w;
        a[i]=w;
        group[c].pb(w);
    }
    sort(a,a+n);
    int ans=0;
    int cntr=0;
    for(int i=0;i<n;i++) {
        ans+=a[i]*i-cntr;
        cntr+=a[i];
    }
    for(int i=1;i<=m;i++) {
        int temp=0;
        cntr=0;
        sort(group[i].begin(), group[i].end());
        for(int j=0;j<group[i].size();j++) {
            temp+=group[i][j]*j-cntr;
            cntr+=group[i][j];
        }
        ans-=temp;
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
