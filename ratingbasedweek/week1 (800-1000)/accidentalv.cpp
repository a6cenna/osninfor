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
    pii a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].fs;
        a[i].sc=i+1;
    }
    sort(a,a+n);
    vector<int> pre(n+1, 0);
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1]+a[i-1].fs;
    }
    int l=0,r=n-1;
    int batas=n-1;
    while(l<=r) {
        int mid=(l+r)/2;
        bool ok=1;
        int cur=pre[mid+1];
        for(int i=mid+1;i<n;i++) {
            if(cur>=a[i].fs) {
                cur+=a[i].fs;
            }
            else {
                ok=0;
                break;
            }
        }
        if(ok) {
            batas=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout << n-batas << '\n';
    vector<int> ans;
    for(int i=batas;i<n;i++) {
        ans.pb(a[i].sc);
    }
    sort(ans.begin(), ans.end());
    for(auto x:ans) {
        cout << x << ' ';
    }
    cout << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
