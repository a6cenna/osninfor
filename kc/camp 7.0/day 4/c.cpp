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

const int MAXN=2e4;

void solve() {
    int harga;cin>>harga;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> dp(MAXN+1, LLONG_MAX);
    dp[0]=0;
    // for (int i = 1; i <= MAXN; i++)
    // {
    //     for(int j=0;j<n;j++) {
    //         if(i-a[j]>=0) {
    //             if(dp[i-a[j]]!=INT_MAX) dp[i]=min(dp[i], dp[i-a[j]]+1);
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++) {
    //     for(int j=1;j<=MAXN;j++) {

    //     }
    // }
    for(int i=0;i<n;i++) {
        for(int j=MAXN;j>=1;j--) {
            if(j-a[i]>=0 && dp[j-a[i]]!=LLONG_MAX) dp[j]=min(dp[j], dp[j-a[i]]+1);
        }
    }
    int ans=0;
    int cnt=0;
    for(int i=harga;i<=MAXN;i++) {
        if(dp[i]!=LLONG_MAX) {
            ans=i;
            cnt=dp[i];
            break;
        }
    }

    cout << ans << ' ' << cnt << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
