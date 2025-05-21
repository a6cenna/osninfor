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
    int n, k;cin>>n>>k;
    pii lr[n];
    for(int i=0;i<n;i++) cin>>lr[i].fs;
    for(int i=0;i<n;i++) cin>>lr[i].sc;
    // sort(lr, lr+n, [](pii &a, pii &b) {
    //     return a.fs+a.sc>b.fs+b.sc;
    // });
    ll ans=0;
    vector<int> tras;
    for(int i=0;i<n;i++) {
        ans+=max(lr[i].fs, lr[i].sc);
        tras.pb(min(lr[i].fs, lr[i].sc));
    }
    sort(tras.begin(), tras.end(), greater<int>());
    for(int i=0;i<k;i++) {
        if(i==k-1) {
            ans++;
            break;
        }
        ans+=tras[i];
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
