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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    int r=n;
    int ans=0;
    while(l<=r) {
        bool issorted=true;
        int mid=l+(r-l)/2;
        int prev=-1;
        for(int i=0;i<n;i++) {
            if(a[i]<=mid||a[i]>n-mid) continue;
            if(a[i]<prev) issorted=false;
            prev=a[i];
        }
        if(issorted) {
            r=mid-1;
            ans=mid;
        }
        else {
            l=mid+1;
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

// binser minimum
