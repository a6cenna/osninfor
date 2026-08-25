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
    // n(n-1)/2
    int l=2,r=2e9;
    int cur=2;
    while(l<=r) {
        int mid=(l+r)/2;
        if((mid*(mid-1))/2<=n) {
            l=mid+1;
        }
        else {
            r=mid-1;
            cur=mid;
        }
    }
    cur--;
    cur+=n-(cur*(cur-1)/2);
    cout << cur << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
