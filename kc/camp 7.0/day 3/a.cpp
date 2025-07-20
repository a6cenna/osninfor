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
    int n,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int bawah=1;
    int atas=2e9;
    int ans=0;
    while(bawah<=atas) {
        int mid=(bawah+atas)/2;
        int air=0;
        for(auto coral:a) {
            air+=max(mid-coral, 0LL);
        }
        if(air>x) {
            atas=mid-1;
        } 
        else {
            bawah=mid+1;
            ans=mid;
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
