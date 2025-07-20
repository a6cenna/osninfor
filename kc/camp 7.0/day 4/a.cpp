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

const int mod=1e9+7;

void solve() {
    int h,w;cin>>h>>w;
    char grid[h][w];
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            cin>>grid[i][j];
        }
    }
    vector<vector<int>> dp(h,vector<int>(w, 0));
    dp[0][0]=1;
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(grid[i][j]=='#') continue;
            if(i+1<h) dp[i+1][j]=(dp[i+1][j]+dp[i][j])%mod;
            if(j+1<w) dp[i][j+1]=(dp[i][j+1]+dp[i][j])%mod;
        }
    }
    cout << dp[h-1][w-1] << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
