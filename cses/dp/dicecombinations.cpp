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

const int MOD = 1e9+7;

void solve() {
    int n;cin>>n;

    vector<int> dp(n+1, 0);

    dp[0]=1;

    for(int i=0;i<n;i++) {
        for(int j=1;j<=6;j++) {
            if(i+j<=n) {
                dp[i+j]=(dp[i+j]+dp[i])%MOD;
            }
        }
    }

    cout << dp[n];
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
