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
    int n,w;cin>>n>>w;
    vector<pii> v; // berat, value
    int sum=0;
    for(int i=0;i<n;i++) {
        int x,y;cin>>x>>y;
        v.pb({x,y});
    }
    vector<int> dp(w+5, 0);

    for(int i=0;i<n;i++) {
        for(int j=w;j>=1;j--) {
            if(j-v[i].fs<0) break;
            dp[j]=max(dp[j], dp[j-v[i].fs]+v[i].sc);
        }
    }

    cout << dp[w] << '\n';
}

signed main() {
    war_without_reason

    solve();
}
