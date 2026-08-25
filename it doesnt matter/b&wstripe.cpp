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

void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int> pref(n+1,0);
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+(s[i-1]=='W');
    }
    int ans=k;
    for(int i=k;i<=n;i++) {
        ans=min(ans, pref[i]-pref[i-k]);
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
