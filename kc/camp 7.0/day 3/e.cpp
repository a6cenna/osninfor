// binser 

// cari sub array yang valid pake partitioning

// ignore mex

// kalau valid gedein mexnya

// nek ga kecilin

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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    int r=n/k;
    int ans;
    while(l<=r) {
        int mid=(l+r)/2;
        set<int> st;
        int cnt=0;
        for(int i=0;i<n;i++) {
            if(a[i]<mid) st.insert(a[i]);
            if(st.size()==mid) {
                cnt++;
                st.clear();
            }
            if(cnt==k) break;
        }
        if(cnt==k) {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
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
