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
    int n;cin>>n;
    vector<int> dp(n+1, INT_MAX);
    vector<bool> a(n+1, 0);
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        a[x]=1;
        dp[x]=1;
    }
    for(int i=2;i<=n;i++) {
        if(a[i]) {
            for(int j=1;j*i<=n;j++) {
                if(dp[j]!=INT_MAX) {
                    dp[i*j]=min(dp[i*j], dp[j]+1);
                }
            }
        }
    }
    for(int i=1;i<=n;i++) {
        if(dp[i]!=INT_MAX) cout << dp[i] << ' ';
        else cout << -1 << ' ';
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
