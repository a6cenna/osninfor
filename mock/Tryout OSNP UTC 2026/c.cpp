#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n,k;cin>>n>>k;
    vector<int> t(n);
    int mx=LLONG_MIN/2;
    int mn=LLONG_MAX/2;
    for(int i=0;i<n;i++) {
        cin>>t[i];
        mx=max(mx, t[i]);
        mn=min(mn, t[i]);
    }
    vector<int> selisih;
    for(int i=1;i<n;i++) {
        selisih.pb(t[i]-t[i-1]-1);
    }
    sort(selisih.begin(), selisih.end(), greater<int>());
    int ans=mx-mn+1;
    for(int i=0;i<k-1;i++) {
        ans-=selisih[i];
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
6 5 8
R 2
C 4
R 5
C 1
R 2
C 4
R 6
C 3
*/
