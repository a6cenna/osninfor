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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        for(int j=0;j<30;j++) {
            if(a[i]&(1<<j)) mp[j]++;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++) {
        int tmp=0;
        for(int j=0;j<30;j++) {
            if(a[i]&(1<<j)) tmp+=(n-mp[j])*(1<<j);
            else tmp+=(mp[j])*(1<<j);
        }
        ans=max(ans,tmp);
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
