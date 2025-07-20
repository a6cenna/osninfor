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
    int x[n],v[n];
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>v[i];
    double l=0;
    double r=1e9;
    double ans=-1;
    for(int i=1;i<=80;i++) {
        double mid = l+(r-l)/2;
        bool valid=false;
        double minp=-1e18;
        double maxp=1e18;
        for(int i=0;i<n;i++) {
            minp=max(minp, x[i]-mid*v[i]);
            maxp=min(maxp, x[i]+mid*v[i]);
        }
        if(minp<=maxp) {
            r=mid;
            ans=mid;
        }
        else {
            l=mid;
        }
    }

    cout << fixed << setprecision(12) << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}


