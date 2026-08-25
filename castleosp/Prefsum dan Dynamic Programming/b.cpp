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

const int mod=1e9+7;

void solve() {
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> dp(x+1,0);
    dp[0]=1;

    for(int i=1;i<=x;i++) {
        for(int j=0;j<n;j++) {
            if(i-a[j]>=0) {
                dp[i]=(dp[i]+dp[i-a[j]])%mod;
            }
        }
    }

    cout << dp[x] << '\n';
}

int main() {
    war_without_reason

    solve();
}
