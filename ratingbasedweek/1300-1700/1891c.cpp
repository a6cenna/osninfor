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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int r=n-1;
    int ans=0;
    int x=0;
    for(int i=0;i<=r;i++) {
        if(i==r) {
            ans+=min(a[i], max(0LL, (a[r]-x+1)/2)+1);
            break;
        }
        if(a[i]+x<a[r]) {
            ans+=a[i];
            x+=a[i];
        }
        else {
            ans+=a[r]-x+1;
            a[i]-=a[r]-x;
            x=0;
            i--;
            r--;
        }
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
