// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int ans=0;
    for(int i=n-2;i>=0;i--) {
        if(a[i]>a[i+1]) {
            ans+=ceil((double)a[i]/a[i+1])-1;
            a[i]=(a[i]/ceil((double)a[i]/a[i+1]));
        }
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
