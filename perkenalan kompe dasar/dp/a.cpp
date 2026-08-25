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

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k;cin>>k;
    vector<int> dp(k+1, INT_MAX);
    dp[0]=0;
    for(int i=0;i<n;i++) {
        for(int j=1;j<=k;j++) {
            if(j-a[i]>=0&&dp[j-a[i]]!=INT_MAX) dp[j]=min(dp[j-a[i]]+1, dp[j]);
        }
    }
    cout << (dp[k]==INT_MAX?-1:dp[k]) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
