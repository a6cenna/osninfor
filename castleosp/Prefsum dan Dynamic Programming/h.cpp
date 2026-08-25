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
    vector<int> a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    vector<int> dp(n+1,-1);
    dp[0]=0;
    for(int i=0;i<3;i++) {
        for(int j=a[i];j<=n;j++) {
            if(dp[j-a[i]]==-1) continue;
            if(dp[j]!=-1)dp[j]=max(dp[j],dp[j-a[i]]+1);
            else dp[j]=dp[j-a[i]]+1;
        }
    }

    cout << (dp[n]==-1?1:dp[n]) << '\n';
}

signed main() {
    war_without_reason

    solve();
}
