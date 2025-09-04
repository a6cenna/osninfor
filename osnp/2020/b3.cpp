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
    vector<int> comp;
    int s[n],e[n],p[n];
    int emax=INT_MIN;
    for(int i=0;i<n;i++) {
        cin>>s[i]>>e[i]>>p[i];
        emax=max(emax, e[i]);
    }
    vector<vector<int>> adj(emax+1);
    for(int i=0;i<n;i++) {
        adj[e[i]].pb(i);
    }
    vector<int> dp(emax+1);
    dp[0]=0;
    for(int i=1;i<=emax;i++) {
        dp[i]=dp[i-1];
        for(auto &x:adj[i]) {
            dp[i]=max(dp[i], dp[s[x]-1]+p[x]);
        }
    }
    cout << dp[emax];
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
