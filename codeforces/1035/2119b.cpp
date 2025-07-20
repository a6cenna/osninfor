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
#define int ll

void solve() {
    int n;cin>>n;
    int px,py,qx,qy;cin>>px>>py>>qx>>qy;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int euclid=(px-qx)*(px-qx)+(py-qy)*(py-qy);
    sort(a,a+n);
    vector<int> prefixsum(n+1,0);
    for(int i=1;i<=n;i++) {
        prefixsum[i]=prefixsum[i-1]+a[i-1];
    }
    int maxd = prefixsum[n]*prefixsum[n];
    if(prefixsum[n]<=2*prefixsum[n-1]&&euclid<=maxd) {
        cout << "YES\n";
        return;
    }
    int mind=INT_MAX;
    for(int i=0;i<=n;i++) {
        mind=min(mind, abs(prefixsum[n]-2*prefixsum[i]));
    }
    mind=mind*mind;
    bool can=1;
    if(maxd<euclid) {
        can=0;
    }
    else if (euclid<mind) {
        can=0;
    }

    cout << (can?"YES":"NO") << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
