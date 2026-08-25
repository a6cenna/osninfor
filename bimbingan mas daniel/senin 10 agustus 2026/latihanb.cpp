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

void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(n+1, vector<int>(n+1,0))); // panjang, 2 angka terakhir
    // pull dari dp[len-1][i][j] ke dp[len][j][k]
    for(int i=1;i<=n;i++) {
        for(int j=i+1;j<=n;j++) {
            dp[2][i][j]=1;
        }
    }
    for(int len=3;len<=n;len++) {
        for(int i=1)
    }
}

int main() {
    war_without_reason

    solve();
}
