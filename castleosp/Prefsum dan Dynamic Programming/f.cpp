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
        sum+=y;
    }
    vector<int> dp(sum+5, -1);
    dp[0]=0;

    for(int i=0;i<n;i++) {
        for(int j=sum;j>=1;j--) {
            if(j-v[i].sc<0) break;
            if(dp[j-v[i].sc]==-1) continue; 
            if(dp[j]!=-1) dp[j]=min(dp[j], dp[j-v[i].sc]+v[i].fs);
            else dp[j]=dp[j-v[i].sc]+v[i].fs;
        }
    }

    for(int i=sum;i>=0;i--) {
        if(dp[i]!=-1&&dp[i]<=w) {
            cout << i << '\n';
            return;
        }
    }
}

signed main() {
    war_without_reason

    solve();
}
