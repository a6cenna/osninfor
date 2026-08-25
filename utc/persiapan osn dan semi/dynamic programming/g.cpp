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
    int n,m;cin>>n>>m;
    vector<pii> vtype0,vtype1;

    for(int i=0;i<n;i++) {
        int h,k,d;cin>>h>>k>>d;
        if(d==0) vtype0.pb({h, k});
        else vtype1.pb({h, k});
    }

    vector<int> dp(m+1,0);
    for(int i=0;i<vtype0.size();i++) {
        for(int j=1;j<=m;j++) {
            if(j-vtype0[i].fs>=0) dp[j]=max(dp[j], dp[j-vtype0[i].fs]+vtype0[i].sc);
        }
    }
    for(int i=0;i<vtype1.size();i++) {
        for(int j=m;j>=1;j--) {
            if(j-vtype1[i].fs>=0) dp[j]=max(dp[j], dp[j-vtype1[i].fs]+vtype1[i].sc);
        }
    }

    cout << dp[m] << '\n';
}

signed main() {
    war_without_reason

    solve();
}
