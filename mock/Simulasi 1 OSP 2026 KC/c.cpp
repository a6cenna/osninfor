#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=-1;
    for(int i=0;i<=n-2*k;i++) {
        vector<int> pake;
        for(int j=i;j<i+2*k;j++) pake.pb(a[j]);
        sort(pake.begin(),pake.end());
        ans=max(ans,pake[k]);
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
7 2
1 2 3 4 5 6 7

7 2
2 3 7 1 6 4 5
*/
