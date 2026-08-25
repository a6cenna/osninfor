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
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i].fs>>a[i].sc;
        sum+=a[i].sc;
    }
    sort(a,a+n, [](pii &a, pii &b){
        return a.fs+a.sc < b.fs+b.sc;
    });
    int cur=0;
    int ans=0;
    for(int i=0;i<n;i++) {
        cur+=a[i].fs;
        sum-=a[i].sc;
        if(cur>sum) {
            break;
        }
        ans++;
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
