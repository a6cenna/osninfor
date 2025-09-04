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

void solve() {
    int n,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    int cur_max=a[0];
    int cur_min=a[0];
    for(int i=1;i<n;i++) {
        cur_max=max(cur_max, a[i]);
        cur_min=min(cur_min, a[i]);
        if(cur_max-cur_min>2*x) ans++, cur_max=a[i], cur_min=a[i];
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
