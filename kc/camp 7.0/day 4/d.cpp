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
    int n,k;cin>>n>>k;
    char grid[n][k];
    for(int i=0;i<n;i++) {
        for(int j=0;j<k;j++) {
            cin>>grid[i][j];
        }
    }
    vector<vector<int>> dp(n,vector<int>(k, INT_MAX));
    dp[0][0]=(grid[0][0]=='#');
    for(int i=0;i<n;i++) {
        for(int j=0;j<k;j++) {
            if(i+1<n) dp[i+1][j]=min(dp[i+1][j], dp[i][j]+(grid[i+1][j]=='#'&&grid[i][j]!='#'));
            if(j+1<k) dp[i][j+1]=min(dp[i][j+1], dp[i][j]+(grid[i][j+1]=='#'&&grid[i][j]!='#'));

            // if(i+1<n) dp[i+1][j]=min(dp[i+1][j], dp[i][j]+(grid[i+1][j]!=grid[i][j]));
            // if(j+1<n) dp[i][j+1]=min(dp[i][j+1], dp[i][j]+(grid[i][j+1]!=grid[i][j]));
        }
    }
    // cout << (dp[n-1][k-1]+1)/2;
    cout << dp[n-1][k-1];
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
