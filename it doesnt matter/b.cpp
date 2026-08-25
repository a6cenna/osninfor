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
    int h[n];
    for(int i=0;i<n;i++) cin>>h[i];
    vector<int> dp(n+1, INT_MAX);
    dp[1]=0;
    for(int i=2;i<=n;i++) {
        for(int j=1;j<=min(k, i-1);j++) {
            if(dp[i-j]!=INT_MAX) dp[i]=min(dp[i], dp[i-j]+abs(h[i-1]-h[i-j-1]));
        }
    }
    cout << dp[n] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
