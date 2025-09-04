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
    int n,c;cin>>n>>c;
    vector<int>a;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x<=c) a.pb(x);
    }
    sort(a.begin(), a.end(), greater<int>());
    int mul=1;
    int ans=0;
    for(auto &x:a) {
        if(x*mul>c) {
            ans++;
            continue;
        }
        mul*=2;
    }
    ans+=n-a.size();

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
