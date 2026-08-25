// war without reason

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
    int l[n],r[n];
    for(int i=0;i<n;i++) cin>>l[i];
    for(int i=0;i<n;i++) cin>>r[i];
    int sum=0;
    vector<int> mn;
    for(int i=0;i<n;i++) {
        sum+=max(l[i],r[i]);
        mn.pb(min(l[i],r[i]));
    }
    k--;
    sort(mn.begin(), mn.end(), greater<int>());
    for(int i=0;i<k;i++) {
        sum+=mn[i];
    }

    cout << sum+1 << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
