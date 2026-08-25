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
    int n;cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++) cin>>a[i];
    // vector<vector<int>> dp(2, vector<int>(n+5, 0));
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=i+1;j++) {
    //         dp[(i+1)%2][j]=0;
    //     }
    //     if(a[i]<=i) dp[(i+1)%2][a[i]]+=1; 
    //     for(int j=1;j<=i;j++) {
    //         dp[(i+1)%2][j+1]+=dp[i%2][j];
    //         dp[(i+1)%2][1]=max(dp[(i+1)%2][1], dp[i%2][j]+(a[i]==1));
    //     }
    // }
    // int ans=0;
    // for(int i=0;i<=1;i++) {
    //     for(int j=1;j<=n;j++) {
    //         ans=max(ans, dp[i][j]);
    //     }
    // }
    int dp[n+5];
    int cnt[n+5];
    memset(cnt, 0, sizeof(cnt));
    dp[0]=0;
    for(int i=1;i<=n;i++) {
        dp[i]=dp[i-1];
        if(a[i]<=i) {
            cnt[i-a[i]+1]++;
            dp[i]=max(dp[i], dp[i-a[i]]+cnt[i-a[i]+1]);
        }
    }

    cout << n-dp[n] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
