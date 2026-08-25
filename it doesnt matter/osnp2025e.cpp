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
    int n,m,k;cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    vector<int> dp(n+1, -1);
    dp[0]=0;
    int l=0;
    for(int r=1;r<=n;r++) {
        if(r-m>=0&&dp[r-m]!=-1) l=r-m;
        if(l<=r-m&&a[r-1]-a[l]<=k) dp[r]=dp[l]+1;
    }

    cout << dp[n] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
