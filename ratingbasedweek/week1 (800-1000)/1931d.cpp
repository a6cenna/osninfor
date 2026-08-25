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
    int n,x,y;cin>>n>>x>>y;
    int a[n];
    map<pair<int,int>,int> mp;
    int ans=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        ans+=mp[{(x-(a[i]%x))%x,a[i]%y}];
        mp[{a[i]%x,a[i]%y}]++;
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
